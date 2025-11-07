#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    return answer;
}

int main(void) {

    auto res = solution({5, 1, 4});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [5, 5, 5, 5, 5, 1, 4, 4, 4, 4]
    res = solution({6, 6});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6]
    res = solution({1});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [1]

    return 0;
}
