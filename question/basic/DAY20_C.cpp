#include "bits/stdc++.h"
using namespace std;

int solution(vector<string> strArr) {
    unordered_map<int, int> m;
    for(auto str: strArr){
        m[str.size()]++;
    }

    vector<pair<int, int> > v = {m.begin(), m.end()};


    sort(v.begin(), v.end(), [&](pair<int, int> a, pair<int, int> b) {

        return a.second > b.second;
    });





    return v[0].second;
}

int main(void) {
    cout << solution({"a","bc","d","efg","hi"}) << endl; // 2
    return 0;
}
