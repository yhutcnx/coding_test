#include "bits/stdc++.h"
using namespace std;

string solution(string s) {
    string answer = "";
    unordered_map<char, int> m;

    for(auto c : s){
        m[c]++;
    }

    vector<pair<char, int> > v = {m.begin(), m.end()};
    sort(v.begin(), v.end());

    for(auto t: v){
        if(t.second == 1) answer.push_back(t.first);
    }

    return answer;
}

int main(void) {

    cout << solution("abcabcadc") << "\n"; // "d"

    return 0;
}