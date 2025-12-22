#include "bits/stdc++.h"
using namespace std;


int solution(string my_string) {
    int answer = 0;

    std::string t = "";

    for(auto str : my_string){

        if(str >= '0' && str <= '9'){
            t.push_back(str);
        }
        else {
            if(t.length() > 0){
                answer += stoi(t);
            }
            else {

            }
            t.clear();
        }
    }

    if(t.length() > 0){
            answer += stoi(t);
    }

    return answer;
}

int main(void) {

    cout << solution("aAb1B2cC34oOp") << "\n"; // 37

    return 0;
}