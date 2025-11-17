#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    return answer;
}

int main(void) {

    auto res = solution({1, 2, 3, 100, 99, 98}, 3);
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [3, 6, 9, 300, 297, 294]
    
    res = solution({1, 2, 3, 100, 99, 98}, 2);
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [3, 4, 5, 102, 101, 100]



    return 0;
}
