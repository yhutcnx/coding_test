#include "bits/stdc++.h"
using namespace std;


vector<string> solution(string my_string) {
    vector<string> answer;
    return answer;
}

int main(void) {

    auto res = solution(" i    love  you");
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // ["i", "love", "you"]
    res = solution("    programmers  ");
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // ["programmers"]

    return 0;
}
