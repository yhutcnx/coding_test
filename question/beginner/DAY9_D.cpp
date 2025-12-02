#include "bits/stdc++.h"
using namespace std;

int solution(int balls, int share) {
    int answer = 0;

    // 인수분해 결괴
    int upper[40] = {0};
    int lower[40] = {0};

    // 분자 계산 (최대로 줄인 것)
    for(int i = max(balls - share, share) + 1; i <= balls; i++){
        upper[i]++;
    }

    // 분모 계산 (최대로 줄인 것)
    for(int i = 2; i <= min(balls - share, share); i++){
        lower[i]++;
    }

    // 분모와 분자의 인수 분해
    for(int i = 30; i > 0; i--){
        for(int j = 2; j <= i / 2; j++){
            if (i % j == 0){

                upper[i / j] += upper[i];
                upper[j] += upper[i];
                upper[i] = 0;

                lower[i / j] += lower[i];
                lower[j] += lower[i];
                lower[i] = 0;

                break;
            }
        }
    }

    int realUpper = 1;
    int realLower = 1;

    // 분자와 분모의 약분
    for(int i = 2; i <= 30; i++){
        int t_min = min(upper[i], lower[i]);

        upper[i] -= t_min;
        lower[i] -= t_min;

        if(upper[i] > 0) realUpper *= pow(i, upper[i]);
        if(lower[i] > 0) realLower *= pow(i, lower[i]);
    }

    // 결과
    answer = realUpper / realLower;

    return answer;
}

int main(void) {

    cout << solution(30, 15) << "\n"; // 3
    // cout << solution(20, 2) << "\n"; // 3
    // cout << solution(30, 2) << "\n"; // 3

    return 0;
}


