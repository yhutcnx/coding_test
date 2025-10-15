#include "bits/stdc++.h"
using namespace std;

int solution(int a, int b) {
    int answer = max(stoi(to_string(a) + to_string(b)), 2 * a * b);
    return answer;
}

int main(void) {

    cout << solution(2, 91) << "\n"; // 364
    cout << solution(91, 2) << "\n"; // 912

    return 0;
}