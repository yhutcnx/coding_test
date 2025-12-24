#include "bits/stdc++.h"
using namespace std;


vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;

    vector<vector<int> > t;
    for(int i = 0; i < score.size(); i++){
        t.push_back({i, score[i][0] + score[i][1], 0});
    }
    
    sort(t.begin(), t.end(), [&] (vector<int>& a, vector<int>& b){
        return a[1] > b[1];
    });

    for(int i = 0; i < t.size(); i++){
        t[i][2] = i;
    }

    sort(t.begin(), t.end(), [&] (vector<int>& a, vector<int>& b){
        if(a[1] == b[1]){
            a[2] = min(a[2], b[2]);
            b[2] = min(a[2], b[2]);
        }

        return a[0] < b[0];
    });


    for(auto tt : t){
        // cout << tt[0] << " " << tt[1] << " " <<tt[2] << "\n";

        answer.push_back(tt[2] + 1);
    }
    return answer;
}

int main(void) {

    // auto res = solution({{80, 70}, {90, 50}, {40, 70}, {50, 80}}); // [1, 2, 4, 3]
    auto res = solution( {{80, 70}, {70, 80}, {30, 50}, {90, 100}, {100, 90}, {100, 100}, {10, 30}} ); // {1, 2, 4, 3}
    for(auto t : res){
        cout << t << ",";
    }
    cout << "\n";
    return 0;
}