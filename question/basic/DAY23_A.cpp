#include "bits/stdc++.h"
using namespace std;

int solution(string str1, string str2) {
    return str2.find(str1) != string::npos;
}

int main(void) {

    cout << solution("abc", "aabcc") << endl; // 1
    cout << solution("tbt", "tbbttb") << endl; // 0

    return 0;
}
