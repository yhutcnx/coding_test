#include "bits/stdc++.h"
using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;

    for(int i = 0; i < my_str.size(); i += n){

        answer.push_back(my_str.substr(i, n));

    }
    return answer;
}

int main(void) {

    auto res = solution("abc1Addfggg4556b", 6); // ["abc1Ad", "dfggg4", "556b"]
    for(auto t : res){
        cout << t << ",";
    }
    cout << "\n";
    return 0;
}