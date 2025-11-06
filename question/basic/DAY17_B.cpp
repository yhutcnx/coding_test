#include "bits/stdc++.h"
using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    size_t t = -1;
    while(true){
        t = myString.find(pat, t + 1);
        if(t == string::npos) break;
        answer++;
    }
    return answer;
}

int main(void) {
    cout << solution("banana", "ana") << endl; // 2
    cout << solution("aaaa", "aa") << endl; // 3
    return 0;
}
