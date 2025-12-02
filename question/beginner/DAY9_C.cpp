#include "bits/stdc++.h"
using namespace std;



string solution(string rsp) {
    string answer = "";

    unordered_map<char, char> m = {
        {'0', '5'},
        {'5', '2'},
        {'2', '0'},
    };

    for(auto str : rsp){
        answer += m[str];
    }

    return answer;
}

int main(void) {

    cout << solution("2") << "\n"; // "0"
    cout << solution("205") << "\n"; // "052"


    return 0;
}