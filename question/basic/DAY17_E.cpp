#include "bits/stdc++.h"
using namespace std;


vector<string> solution(string my_string) {
    vector<string> answer;

    size_t start = 0;
    size_t end = -1;

    while(true){
        size_t t = my_string.find("  ", 0);
        if(t == string::npos) break;
        my_string = my_string.replace(t, 2, " ");
    }

    while(true){
        end = my_string.find(' ', end + 1);

        string t = my_string.substr(start, end - start);

        if(t != "") answer.push_back(t);
        if(end == string::npos) break;
        start = end + 1;
    }

    return answer;
}

int main(void) {

    auto res = solution(" i    love  you");
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // ["i", "love", "you"]
    res = solution("    programmers  ");
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // ["programmers"]

    return 0;
}
