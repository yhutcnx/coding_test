#include "bits/stdc++.h"
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;

    int m[10010] = {0};
    m[n] = 1;

    for(int i = n; i > 0; i--){
        if(m[i] == 0) continue;

        for(int j = 1; j < i / 2; j++){
            if(i % j == 0){
                m[j] = 1;
                m[i / j] = 1;
                m[i] = 0;
            }
        }
        answer.push_back(i);
    }

    reverse(answer.begin(), answer.end());


    return answer;
}

int main(void) {

    auto res = solution(24); // [1, 2, 3, 4, 6, 8, 12, 24]
    for(auto t : res){
        cout << t << ",";
    }
    cout << "\n";
    return 0;
}