#include "bits/stdc++.h"
using namespace std;


int solution(int a, int b, bool flag) {
    return flag ? (a + b) : (a - b);
}

int main(void) {
    cout << solution(-4, 7, true) << "\n"; // 3 
    cout << solution(-4, 7, false) << "\n"; // -11 
    return 0;
}