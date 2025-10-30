#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer = arr;
    for(int i = 0; i < query.size(); i++){
        auto q = query[i];
        if(i & 1){
            answer = {answer.begin() + q, answer.end()}; 
        }
        else {
            answer = {answer.begin(), answer.begin() + q + 1};
        }
    }
    return answer;
}

int main(void) {
    
    auto res = solution({0, 1, 2, 3, 4, 5}, {4, 1, 2});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [1, 2, 3]

    return 0;
}
