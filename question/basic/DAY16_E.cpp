#include "bits/stdc++.h"
using namespace std;

string solution(string my_string, string alp) {

    size_t t = 0;
    t = my_string.find(alp, t);
    while(t != string::npos){
        my_string[t] = my_string[t] - 'a' + 'A';
        t = my_string.find(alp, t);
    }
    return my_string;
}

int main(void) {
    cout << solution("programmers", "p") << endl; // Programmers
    cout << solution("lowercase", "x") << endl; // lowercase
    return 0;
}
