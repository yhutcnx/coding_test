#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;

    unordered_map<int, int> history;
    for(auto num : arr){
        if(history[num]) continue;

        answer.push_back(num);
        if(answer.size() >= k) break;

        history[num]++;
    }

    for(int i = answer.size(); i < k; i++){
        answer.push_back(-1);
    }

    return answer;
}

int main(void) {

    auto res = solution({0, 1, 1, 2, 2, 3}, 3);
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [0, 1, 2]
    res = solution({0, 1, 1, 1, 1}, 4);
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [0, 1, -1, -1]

    return 0;
}
