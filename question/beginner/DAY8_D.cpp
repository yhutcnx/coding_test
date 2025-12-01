#include "bits/stdc++.h"
using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0) answer++;
    }
    return answer;
}

int main(void) {

    cout << solution(20) << "\n"; // 6

    return 0;
}