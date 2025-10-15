#include "bits/stdc++.h"
using namespace std;

string solution(string str1, string str2) {
    string answer = "";

    // str1.size() == str2.size()
    for(int i = 0; i < str1.size(); i++){
        answer.push_back(str1[i]);
        answer.push_back(str2[i]);
    }
    return answer;
}

int main(void) {
    cout << solution("aaaaa", "bbbbb") << "\n"; // "ababababab"
    return 0;
}