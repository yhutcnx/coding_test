#include "bits/stdc++.h"
using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;

    size_t l = find(str_list.begin(), str_list.end(), "l") - str_list.begin();
    size_t r = find(str_list.begin(), str_list.end(), "r") - str_list.begin();

    if(l == r){
        return answer;
    }
    else if(l > r) {
        answer = { str_list.begin() + r + 1, str_list.end() };
    }
    else {
        answer = { str_list.begin(), str_list.begin() + l };
    }
    return answer;
}

int main(void) {
    
    auto res = solution({"u", "u", "d", "r", "l"});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // ["u", "u"]

    res = solution({"d", "u"});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // []

    res = solution({"r", "u", "l"});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // []

    return 0;

}
