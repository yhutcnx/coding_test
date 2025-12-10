#include "bits/stdc++.h"
using namespace std;

string solution(string my_string) {
    string answer = "";
    unordered_map<char, int> m;

    for(int i = my_string.size() - 1; i >= 0; i--){
        m[my_string[i]] = i;
    }

    vector<pair<char, int> > v = {m.begin(), m.end()};

    sort(v.begin(), v.end(), [&] (pair<char, int> a, pair<char, int> b) {
        return a.second > b.second;
    });
    
    for(auto vv : v){
        string t;
        t.push_back(vv.first);
        answer = t + answer;
    }

    return answer;
}

int main(void) {

    cout << solution("people") << "\n"; // "peol"

    return 0;
}