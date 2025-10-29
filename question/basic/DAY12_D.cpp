#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    return answer;
}

int main(void) {
    
    auto res = solution({1, 2, 1, 4, 5, 2, 9});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [2, 1, 4, 5, 2]

    res = solution({1, 2, 1});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [2]

    res = solution({1, 1, 1});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [-1]

    res = solution({1, 2, 1, 2, 1, 10, 2, 1});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [2, 1, 2, 1, 10, 2]

    return 0;

}
