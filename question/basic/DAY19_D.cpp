#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    return answer;
}

int main(void) {

    auto res = solution({0, 1, 1, 1, 0});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [0, 1, 0]
    res = solution({0, 1, 0, 1, 0});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [0, 1, 0, 1, 0]
    res = solution({0, 1, 1, 0});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [-1]

    return 0;
}
