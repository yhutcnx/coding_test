#include "bits/stdc++.h"
using namespace std;

int solution(string num_str) {
    int answer = 0;

    for(auto str : num_str){
        answer += str - '0';
    }

    return answer;
}

int main(void) {

    // cout << solution("123456789") << endl; // 45
    cout << solution("1000000") << endl; // 1


    return 0;
}
