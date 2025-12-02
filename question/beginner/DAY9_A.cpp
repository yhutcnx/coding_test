#include "bits/stdc++.h"
using namespace std;


int solution(int hp) {
    int answer = 0;

    answer += hp / 5;
    hp = hp % 5;

    answer += hp / 3;
    hp = hp % 3;

    answer += hp;

    return answer;
}

int main(void) {

    cout << solution(23) << "\n"; // 5
    cout << solution(24) << "\n"; // 6
    cout << solution(999) << "\n"; // 201

    return 0;
}