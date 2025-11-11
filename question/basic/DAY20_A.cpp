#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr) {
    int arrSize = arr.size();
    
    int idx = 0;

    for(int i = idx; pow(2, i) < arrSize; i++){
        idx = i;
    }

    if(pow(2, idx) != arrSize) idx++;

    for(int i = arr.size(); i < pow(2, idx); i++) arr.push_back(0);
    return arr;
}

int main(void) {

    auto res = solution({1});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [1, 2, 3, 4, 5, 6, 0, 0]
    // res = solution({58, 172, 746, 89});
    // for(auto t : res){
    //     cout << t << ",";
    // }
    // cout << endl; // [58, 172, 746, 89]

    return 0;
}
