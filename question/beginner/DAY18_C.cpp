#include "bits/stdc++.h"
using namespace std;

int solution(int n, int t) {
    int answer = pow(2, t) * n;
    return answer;
}

int main(void) {

    cout << solution(2, 10) << "\n"; // 2048

    return 0;
}