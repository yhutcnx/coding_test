#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer = emergency;
    sort(emergency.begin(), emergency.end(), [&](int a, int b){return a > b;});
    
    unordered_map<int ,int> t;
    for(int i = 0; i < emergency.size(); i++){
        t[emergency[i]] = i + 1;
    }

    for(int i = 0; i < answer.size(); i++){
        answer[i] = t[answer[i]];
    }


    return answer;
}

int main(void) {
    vector<int> res;

    res = solution({3, 76, 24});
    
    for(auto t:res){
        cout << t << ",";
    }
    cout << "\n"; // [3, 1, 2]

    return 0;
}