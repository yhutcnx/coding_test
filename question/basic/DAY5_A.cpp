#include "bits/stdc++.h"
using namespace std;

string solution(string code) {
    string answer = "";
    bool mode = false;

    for(int i = 0; i < code.size(); i++){
        char t = code[i];

        // "1" 이면 모드 변경
        if(t == '1') {
            mode = !mode;
            continue;
        }

        // 모드가 Off 일경우 짝수만 추가
        if(!mode && !(i & 1)){
            answer.push_back(t);
        }
        
        // 모드가 On 일경우 홀수만 추가
        else if (mode && (i & 1)){
            answer.push_back(t);
        }
    }

    // 빈값 처리
    if(answer.empty()){
        answer = "EMPTY";
    }
    return answer;
}

int main(void) {
    cout << solution("abc1abc1abc") << "\n"; // "acbac"
    return 0;
}