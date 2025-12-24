#include "bits/stdc++.h"
using namespace std;

int solution(int n) {
    int answer = 1;

    for(int i = 1; i < n; i++){
        while(true){
            answer++;
            string t = to_string(answer);
            if(t.find("3") == string::npos && answer % 3 != 0) {
                break;
            }
        }
    }

    return answer;
}

int main(void) {

    // cout << solution(15) << "\n"; // 25
    cout << solution(40) << "\n"; // 76

    return 0;
}