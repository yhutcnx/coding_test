#include "bits/stdc++.h"
using namespace std;

int solution(int n) {
    int answer = 1;

    int cnt = 1;
    while(true){
        if((cnt * 6) % n == 0) return cnt;
        cnt++;
    }

    return answer;
}

int main(void) {

    cout << solution(6) << "\n"; // 1
    cout << solution(10) << "\n"; // 5
    cout << solution(4) << "\n"; // 2

    return 0;
}