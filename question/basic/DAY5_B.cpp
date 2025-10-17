#include "bits/stdc++.h"
using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;

    int t = a;

    for(bool includedMember : included){
        if(includedMember) answer += t;
        t += d;
    }


    return answer;
}

int main(void) {
    cout << solution(3, 4, {true, false, false, true, true}) << "\n"; // 37
    cout << solution(7, 1, {false, false, false, true, false, false, false}) << "\n"; // 10
    return 0;
}
