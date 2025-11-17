#include "bits/stdc++.h"
using namespace std;

int solution(string dartResult) {
    int answer = 0;

    struct DartGameRound {
        int score = 0;
        string chance = "";
        string event = "";

        DartGameRound();
        DartGameRound(int score, string chance, string event) : score(score), chance(chance), event(event){}

    };


    vector<DartGameRound> games { DartGameRound(0, "", ""), DartGameRound(0, "", ""), DartGameRound(0, "", "") };

    size_t pos = 0;
    int round = -1;
    for(int i = 0; i < dartResult.size(); i++){
        char c = dartResult[i];
        if(c >= '0' && c <= '9'){
            if(games[pos].chance != "") pos++;
            games[pos].score = (games[pos].score * 10) + (c - '0');
        }
        else if (c == 'S' || c == 'D' || c == 'T'){
            games[pos].chance = c;            
        }
        else {
            games[pos].event = c;
        }
    }

    vector<int> resultScore = {0, 0, 0};

    for(int i = 0; i < games.size(); i++){
        int times = 0;
        switch (games[i].chance[0]) {
            case 'T': times++;
            case 'D': times++;
            case 'S': times++;
        }

        resultScore[i] = pow(games[i].score, times);


        if(!games[i].event.empty()){
            if(games[i].event[0] == '*'){
                if(i > 0) resultScore[i - 1] *= 2;
                resultScore[i] *= 2;
            }
            else if(games[i].event[0] == '#') {
                resultScore[i] *= -1;
            }
        }

    }


    for(auto result : resultScore) answer += result;

    return answer;
}

int main(void) {

    cout << solution("1S2D*3T") << "\n"; // "37"

    return 1;

}