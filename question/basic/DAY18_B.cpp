#include "bits/stdc++.h"
using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    return answer;
}

int main(void) {

    auto res = solution("axbxcxdx");
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // ["a","b","c","d"]
    res = solution("dxccxbbbxaaaa");
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // ["aaaa","bbb","cc","d"]

    return 0;
}
