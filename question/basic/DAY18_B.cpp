#include "bits/stdc++.h"
using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;

    int cur_position=0;
    int position;

    while ((position = myString.find("x", cur_position)) != string::npos) {
        int len = position - cur_position;
        string result = myString.substr(cur_position, len);
        if(!result.empty()) answer.push_back(result);
        cur_position = position + 1;
    }

    string result = myString.substr(cur_position);
        if(!result.empty()) answer.push_back(result);
    sort(answer.begin(), answer.end());

    return answer;
}

int main(void) {

    auto res = solution("xaxbxcxdx");
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
