#include "bits/stdc++.h"
using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;

    unordered_map<int, int> map;
    map[a]++;
    map[b]++;
    map[c]++;
    map[d]++;

    if(map.size() == 1){
        answer = 1111 * a;
    }


    // 2가지 경우
    else if(map.size() == 2){
        int p = -1;
        int q = -1;
        bool flags = true;
        for(auto dice : map) {
            if(dice.second == 3) p = dice.first;
            else if (dice.second == 2) {
                if(p == -1) p = dice.first;
                else q = dice.first;
                flags = false;
            }
            else q = dice.first;
        }
        if(flags){
            answer = pow((10 * p + q), 2);
        }
        else {
            answer = (p + q) * abs(p - q);
        }
    }

    else if(map.size() == 3){
        answer = 1; 
        for(auto dice : map) {
            if(dice.second == 1){
                answer *= dice.first;
            }
        }
    }
    
    else if(map.size() == 4){
        int minNum = 7;
        for(auto dice : map) {
            minNum = min(minNum, dice.first);
        }
        answer = minNum;
    }

    return answer;
}

int main(void) {

    cout << solution(2, 2, 2, 2) << "\n"; // 2222
    cout << solution(4, 1, 4, 4) << "\n"; // 1681
    cout << solution(6, 3, 3, 6) << "\n"; // 27
    cout << solution(2, 5, 2, 6) << "\n"; // 30
    cout << solution(6, 4, 2, 5) << "\n"; // 2

    return 0;

}
