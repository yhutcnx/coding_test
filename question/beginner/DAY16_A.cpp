#include "bits/stdc++.h"
using namespace std;

int solution(string message) {
    int answer = message.size() * 2;
    return answer;
}

int main(void) {

    cout << solution("happy birthday!") << "\n"; // 30

    return 0;
}