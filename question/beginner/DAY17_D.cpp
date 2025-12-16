#include "bits/stdc++.h"
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;



    for(auto s_quiz : quiz){
        vector<string> splits;
        size_t pos = 0;

        while(true){
            size_t t_pos = s_quiz.find(' ', pos);
            if(t_pos == string::npos){
                splits.push_back(s_quiz.substr(pos, t_pos - pos));
                break;
            }
            splits.push_back(s_quiz.substr(pos, t_pos - pos));
            pos = t_pos + 1;
        }


        bool res = false;
        
        if(splits[1] == "-"){
            res = stoi(splits[0]) - stoi(splits[2]) == stoi(splits[4]);
        }
        else {
            res = stoi(splits[0]) + stoi(splits[2]) == stoi(splits[4]);
        }

        if(res) answer.push_back("O");
        else answer.push_back("X");

    }
    
    return answer;
}

int main(void) {

    auto res = solution({"3 - 4 = -3", "5 + 6 = 11"}); // ["X", "O"]
    for(auto t : res){
        cout << t << ",";
    }
    cout << "\n";
    return 0;
}