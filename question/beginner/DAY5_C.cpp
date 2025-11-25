#include "bits/stdc++.h"
using namespace std;

int solution(int age) {

    int thisYear = 2022;

    return thisYear - age + 1;
}

int main(void) {

    cout << solution(40) << "\n"; // 1983
    cout << solution(23) << "\n"; // 2000

    return 0;
}