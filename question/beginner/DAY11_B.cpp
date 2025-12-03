#include "bits/stdc++.h"
using namespace std;

int solution(int n) {
    int answer = 0;

    for(int i = 1; i <= n; i++){

        int cnt = 0;

        for(int j = 1; j <= ceil((float)i / 2); j++){
            if(i % j == 0) cnt++;
        }

        if(cnt >= 2) answer++;
    }

    return answer;
}

int main(void) {

    cout << solution(10) << "\n"; // 5
    cout << solution(15) << "\n"; // 8

    return 0;
}