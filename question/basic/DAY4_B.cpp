#include "bits/stdc++.h"
using namespace std;

int solution(int number, int n, int m) {
    return (number % n == 0 && number % m == 0) ? 1 : 0;
}

int main(void) {
    cout << solution(60, 2, 3) << "\n"; // 1
    cout << solution(55, 10, 5) << "\n"; // 0
    return 0;
}