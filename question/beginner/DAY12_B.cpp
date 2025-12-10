#include "bits/stdc++.h"
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;

    for(auto c : my_string){
        if(c >= '0' && c <= '9'){
            answer.push_back(c - '0');
        }
    }

    sort(answer.begin(), answer.end(), [&](int a, int b){
        return a < b;
    });
    return answer;
}

int main(void) {

    auto res = solution("hi12392"); // { 1,2,2,3,9 }

    for(auto t : res){
        cout << t << ",";
    }
    cout << "\n";
    return 0;
}