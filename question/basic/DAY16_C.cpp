#include "bits/stdc++.h"
using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    return answer;
}

int main(void) {
    
    auto res = solution({"AAA","BBB","CCC","DDD"});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // {"aaa","BBB","ccc","DDD"}

    res = solution({"aBc","AbC"});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // {"abc","ABC"}

    return 0;

}
