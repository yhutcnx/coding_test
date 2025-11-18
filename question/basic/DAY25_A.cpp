#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    return answer;
}

int main(void) {

    auto res = solution(4);
    for(auto t1 : res){
        cout << "[";
        for(auto t2 : t1){
            cout << t2 << ", ";
        }
        cout << "]";
    }
    cout << "\n"; // [[1, 2, 3, 4], [12, 13, 14, 5], [11, 16, 15, 6], [10, 9, 8, 7]]

    res = solution(5);
    for(auto t1 : res){
        cout << "[";
        for(auto t2 : t1){
            cout << t2 << ", ";
        }
        cout << "]";
    }
    cout << "\n"; // [[1, 2, 3, 4, 5], [16, 17, 18, 19, 6], [15, 24, 25, 20, 7], [14, 23, 22, 21, 8], [13, 12, 11, 10, 9]]

    return 0;
}
