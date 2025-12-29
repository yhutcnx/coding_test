#include "bits/stdc++.h"
using namespace std;

int solution(string before, string after) {

    sort(before.begin(), before.end());
    sort(after.begin(), after.end());
    return before == after;
}

int main(void) {

    cout << solution("olleh", "hello") << "\n"; // 1
    cout << solution("allpe", "apple") << "\n"; // 0
    return 0;
}