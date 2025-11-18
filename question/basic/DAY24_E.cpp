#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;

    for(int i = 0; i < n; i++){
        vector<int> v(n);
        v[i] = 1;
        answer.push_back(v);
    }

    return answer;
}

int main(void) {

    auto res = solution(3);
    for(auto t1 : res){
        cout << "[";
        for(auto t2 : t1){
            cout << t2 << ", ";
        }
        cout << "]";
    }
    cout << "\n"; // [[1, 0, 0], [0, 1, 0], [0, 0, 1]]


    res = solution(6);
    for(auto t1 : res){
        cout << "[";
        for(auto t2 : t1){
            cout << t2 << ", ";
        }
        cout << "]";
    }
    cout << "\n"; // [[1, 0, 0, 0, 0, 0], [0, 1, 0, 0, 0, 0], [0, 0, 1, 0, 0, 0], [0, 0, 0, 1, 0, 0], [0, 0, 0, 0, 1, 0], [0, 0, 0, 0, 0, 1]]


    res = solution(1);
    for(auto t1 : res){
        cout << "[";
        for(auto t2 : t1){
            cout << t2 << ", ";
        }
        cout << "]";
    }
    cout << "\n"; // [[1]]

    return 0;
}
