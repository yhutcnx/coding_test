#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> array) {
    int answer = -1;

    unordered_map<int, int> m;
    for(auto num : array) m[num]++;

    vector<pair<int, int> > v = {m.begin(), m.end()};
    sort(v.begin(), v.end(), [&] (pair<int, int> a, pair<int, int> b){return a.second > b.second; });

    answer = v[0].first;

    if(v.size() >= 2) {
        if(v[0].second == v[1].second) answer = -1;
    }

    return answer;
}

int main(void) {

    cout << solution({1, 2, 3, 3, 3, 4}) << "\n"; // 3

    return 0;
}