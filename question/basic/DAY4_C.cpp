#include "bits/stdc++.h"
using namespace std;

int solution(int n) {

    int answer = 0;

    for(int i = n; i >= 1; i -= 2){
        if(i & 1) {
            answer += i;
        }
        else {
            answer += i * i;
        }
    }
    return answer;
}

int main(void) {
    cout << solution(7) << "\n"; // 16
    cout << solution(10) << "\n"; // 16
    return 0;
}