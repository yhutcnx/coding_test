#include "bits/stdc++.h"
using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    return (num1 == num2) ? 1 : -1;
}

int main(void) {

    cout << solution(2, 3) << "\n"; // -1
    cout << solution(11, 11) << "\n"; // 1

    return 0;
}