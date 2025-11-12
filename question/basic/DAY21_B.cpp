#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;

    //idx, rank
    unordered_map<int, int> m;

    for(int i = 0; i < rank.size(); i++){
        if(attendance[i]) m[i] = rank[i];
    }

    vector<pair<int, int> > newRank = {m.begin(), m.end()};

    sort(newRank.begin(), newRank.end(), [&](pair<int, int> a, pair<int, int> b){
        return a.second < b.second;
    });

    answer = newRank[0].first * 10000 + newRank[1].first * 100 + newRank[2].first;


    return answer;
}

int main(void) {

    cout << solution({3, 7, 2, 5, 4, 6, 1}, {false, true, true, true, true, false, false}) << endl; // 20403
    cout << solution({1, 2, 3}, {true, true, true}) << endl; // 102
    cout << solution({6, 1, 5, 2, 3, 4}, {true, false, true, false, false, true}) << endl; // 50200


    return 0;
}
