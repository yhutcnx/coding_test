#include "bits/stdc++.h"
using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    return answer;
}

int main(void) {

    auto res = solution("oxooxoxxox");
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [1, 2, 1, 0, 1, 0]
    res = solution("xabcxdefxghi");
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [0, 3, 3, 3]

    return 0;
}
