#include "bits/stdc++.h"
using namespace std;

int solution(int num, int n) {
    return (num % n == 0)?1:0;
}
int main(void) {
    cout << solution(98, 2) << "\n"; // 1
    cout << solution(34, 3) << "\n"; // 0
    return 0;
}