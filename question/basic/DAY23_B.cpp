#include "bits/stdc++.h"
using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";

    for(auto str: str_list){

        if(str.find(ex) == string::npos) answer += str;
    }


    return answer;
}

int main(void) { 

    cout << solution({"abc", "def", "ghi"}, "ef") << endl; // "abcghi"
    cout << solution({"abc", "bbc", "cbc"}, "c") << endl; // ""

    return 0;
}
