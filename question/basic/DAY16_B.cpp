#include "bits/stdc++.h"
using namespace std;

string solution(string myString) {
    string answer = "";
    transform(myString.begin(), myString.end(), answer.begin(), ::tolower);
    return answer;
}

int main(void) {
    cout << solution("aBcDeFg") << endl; // abcdefg
    cout << solution("aaa") << endl; // aaa
    return 0;
}
