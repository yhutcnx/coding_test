#include "bits/stdc++.h"
using namespace std;

int solution(string my_string) {
    int answer = 0;

    for(auto c : my_string){
        if(c >= '0' && c <= '9'){
            answer += c - '0';
        }
    }


    return answer;
}


int main(void) {

    cout << solution("aAb1B2cC34oOp") << endl; // { 1,2,2,3,9 }

    return 0;
}