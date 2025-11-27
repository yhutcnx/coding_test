#include "bits/stdc++.h"
using namespace std;

int solution(int n, int k) {
    int answer = 0;

    k -= n / 10;

    answer = 12000 * n + k * 2000;


    return answer;
}

int main(void) {

    cout << solution(10, 3) << "\n"; // 124,000

    return 0;
}