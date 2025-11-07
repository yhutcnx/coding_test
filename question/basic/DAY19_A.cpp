#include "bits/stdc++.h"
using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    return answer;
}

int main(void) {

    auto res = solution("baconlettucetomato");
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // ["onlettu", "etom", "to"]
    res = solution("abcd");
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // ["d"]
    res = solution("cabab");
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // ["EMPTY"]

    return 0;
}
