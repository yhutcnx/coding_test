#include "bits/stdc++.h"
using namespace std;

string solution(string cipher, int code) {
    string answer = "";

    for(int i = 0; i < cipher.size(); i++){
        char t = cipher[i];

        if((i + 1) % code == 0){
            answer.push_back(t);
        }

    }


    return answer;
}

int main(void) {

    cout << solution("dfjardstddetckdaccccdegk", 4) << "\n"; // attack

    return 0;
}