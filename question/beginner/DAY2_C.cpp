#include "bits/stdc++.h"
using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {

    // 일단 단순하게 분모 곱하고, 분자도 그에 맞게 계산함.
    int resDenom = denom1 * denom2;
    int resNumer = (numer1 * denom2) + (numer2 * denom1);


    // 의미있는 인수분해는 2부터 시작, 그리고 둘중 작은것까지 진행. (작은거는 실시간으로 줄이기 가능.)
    for(int i = 2; i <= min(resNumer, resDenom); i++){
        while(true){
            // 둘다 나머지가 0이여야만 의미있는 인수분해
            if(resNumer % i != 0 || resDenom % i != 0) break;
            resNumer = resNumer / i;
            resDenom = resDenom / i;
        }
    }

    return {resNumer, resDenom};
}

int main(void) {
    vector<int> res;

    res = solution(1, 2, 3, 4);
    
    for(auto t:res){
        cout << t << ",";
    }
    cout << "\n"; // [5, 4]

    res = solution(9, 2, 1, 3);
    
    for(auto t:res){
        cout << t << ",";
    }
    cout << "\n"; // [5, 4]

    return 0;
}