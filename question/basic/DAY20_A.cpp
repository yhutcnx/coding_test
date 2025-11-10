#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    return answer;
}

int main(void) {

    auto res = solution({1, 2, 3, 4, 5, 6});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [1, 2, 3, 4, 5, 6, 0, 0]
    res = solution({58, 172, 746, 89});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [58, 172, 746, 89]

    return 0;
}
