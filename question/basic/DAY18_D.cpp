#include "bits/stdc++.h"
using namespace std;

int solution(string myString, string pat) {
    int answer = 0;


    transform(pat.begin(), pat.end(), pat.begin(), [&](char a){
        if(a == 'A') return 'B';
        else return 'A';
    });

    if(myString.find(pat) == string::npos) answer = 0;
    else answer = 1;
    return answer;
}

int main(void) {
    cout << solution("ABBAA", "AABB") << endl; // 1
    cout << solution("ABAB", "ABAB") << endl; // 0
    return 0;
}
