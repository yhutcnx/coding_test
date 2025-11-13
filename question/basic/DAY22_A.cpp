#include "bits/stdc++.h"
using namespace std;

string solution(string n_str) {
    return to_string(stoi(n_str));
}
int main(void) {

    cout << solution("0010") << endl; // 10
    cout << solution("854020") << endl; // 854020

    return 0;
}
