#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    return answer;
}

int main(void) {

    auto res = solution({{572, 22, 37}, {287, 726, 384}, {85, 137, 292}, {487, 13, 876}});
    for(auto t1 : res){
        cout << "{";
        for(auto t2 : t1){
            cout << t2 << ", ";
        }
        cout << "}";
    }
    cout << "\n"; // {{572, 22, 37, 0}, {287, 726, 384, 0}, {85, 137, 292, 0}, {487, 13, 876, 0}}


    res = solution({{57, 192, 534, 2}, {9, 345, 192, 999}});
    for(auto t1 : res){
        cout << "{";
        for(auto t2 : t1){
            cout << t2 << ", ";
        }
        cout << "}";
    }
    cout << "\n"; // {{57, 192, 534, 2}, {9, 345, 192, 999}, {0, 0, 0, 0}, {0, 0, 0, 0}}


    res = solution({{1, 2}, {3, 4}}	);
    for(auto t1 : res){
        cout << "{";
        for(auto t2 : t1){
            cout << t2 << ", ";
        }
        cout << "}";
    }
    cout << "\n"; // {{1, 2}, {3, 4}}


    return 0;
}
