#include "bits/stdc++.h"
using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";


    for(auto t : db){
        if(id_pw[0] != t[0]) continue;
        else if (id_pw[1] != t[1]) {
            answer = "wrong pw";
            break;
        }
        else {
            answer = "login";
            break;
        }

    }

    return answer;
}

int main(void) {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cout << solution({"meosseugi", "1234"}, {{"rardss", "123"}, {"yyoom", "1234"}, {"meosseugi", "1234"}}) << "\n"; // "login"

    return 0;
}