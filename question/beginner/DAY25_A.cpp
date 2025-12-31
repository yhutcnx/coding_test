#include "bits/stdc++.h"
using namespace std;

int solution(string A, string B) {
    for(int i = 0; i < B.size(); i++){

        cout << i << " " << B << "\n";

        if(A == B){
            return i;
        }

        char t = B[0];
        B = B.substr(1, B.size() - 1);
        B.push_back(t);
    }
    
    return -1;
}

int main(void) {

    cout << solution("hello", "ohell") << "\n"; // 1
    return 0;
}