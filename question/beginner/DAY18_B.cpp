#include "bits/stdc++.h"
using namespace std;

int solution(int n) {

    double t = sqrt(n);
    int answer = (t == round(t)) ? 1 : 2;
    return answer;
}

int main(void) {

    cout << solution(144) << "\n"; // 1
    cout << solution(976) << "\n"; // 1

    return 0;
}