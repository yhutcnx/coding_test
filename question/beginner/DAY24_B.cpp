#include "bits/stdc++.h"
using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";

    int maxLength = max(bin1.size(), bin2.size());

    for(int i = bin1.size(); i < maxLength; i++){
        bin1 = "0" + bin1;
    }

    for(int i = bin2.size(); i < maxLength; i++){
        bin2 = "0" + bin2;
    }
    
    int upFlags = 0;
    for(int i = maxLength - 1; i >= 0; i--){
        int t = (bin1[i] - '0') + (bin2[i] - '0') + upFlags;
        
        upFlags = 0;

        if(t >= 2){
            upFlags = 1;
            t -= 2;
        } 

        answer = to_string(t) + answer;
    }


    if(upFlags) {
        answer = to_string(upFlags) + answer;
    }

    return answer;
}

int main(void) {

    cout << solution("10", "11") << "\n"; // 101
    cout << solution("1001", "1111") << "\n"; // 11000
    return 0;
}