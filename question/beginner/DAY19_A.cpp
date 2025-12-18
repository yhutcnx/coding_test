#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> array) {
    int answer = 0;


    for(auto num : array){
        string t = to_string(num);

        for(auto c : t){
            if(c == '7') answer++;
        }
    }

    return answer;
}

int main(void) {

    cout << solution({7, 77, 17}) << "\n"; // 4

    return 0;
}