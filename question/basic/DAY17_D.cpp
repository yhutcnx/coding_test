#include "bits/stdc++.h"
using namespace std;


vector<string> solution(string my_string) {
    vector<string> answer;

    size_t start = 0;
    size_t end = -1;

    while(true){
        end = my_string.find(' ', end + 1);
        answer.push_back(my_string.substr(start, end - start));
        if(end == string::npos) break;

        start = end + 1;
    }
    return answer;
}

int main(void) {

    auto res = solution("i love you");
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // ["i", "love", "you"]
    res = solution("p");
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // ["programmers"]

    return 0;
}
