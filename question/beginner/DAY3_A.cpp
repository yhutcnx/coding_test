#include "bits/stdc++.h"
using namespace std;

int solution(int num1, int num2) {
    int answer = num1 % num2;
    return answer;
}

int main(void) {

    cout << solution(3, 2) << "\n"; // 1

    return 0;
}