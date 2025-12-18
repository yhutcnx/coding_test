#include "bits/stdc++.h"
using namespace std;

int solution(string str1, string str2) {
    int answer = (str1.find(str2) == string::npos) ? 2 : 1;
    return answer;
}

int main(void) {

    cout << solution("ab6CDE443fgh22iJKlmn1o", "6CD") << "\n"; // 1

    return 0;
}