#include "bits/stdc++.h"
using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    return answer;
}

int main(void) {
    
    auto res = solution({"u", "u", "l", "r"});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // ["u", "u"]

    res = solution({"l"});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // []

    return 0;

}
