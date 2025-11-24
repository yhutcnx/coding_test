#include "bits/stdc++.h"
using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    
    string answer = "";

    unordered_map<string, pair<int, int> > m = {
        {"RT", {1, 0}},
        {"CF", {2, 0}},
        {"JM", {3, 0}},
        {"AN", {4, 0}},
    };

    for(int i = 0; i < survey.size(); i++){

        string t_surv = survey[i];
        int t_choice = choices[i];

        if(t_surv == "TR" || t_surv == "FC" || t_surv == "MJ" || t_surv == "NA"){
            t_surv = string() + t_surv[1] + t_surv[0];
            t_choice = 8 - t_choice;
        }

        t_choice -= 4;
        m[t_surv].second += t_choice;
    }

    // index가 있으니, 배열 쓸 필요가 없음.

    vector<pair<string, pair<int, int> > > t = {m.begin(), m.end()};

    sort(t.begin(), t.end(), [&](pair<string, pair<int, int> > a, pair<string, pair<int, int> > b){
        return a.second.first < b.second.first;
    });

    for(auto tt : t){
        if(tt.second.second <= 0) answer.push_back(tt.first[0]);
        else answer.push_back(tt.first[1]);
    }

    return answer;

}

int main(void) {

    cout << solution({"AN", "CF", "MJ", "RT", "NA"}, {5, 3, 2, 7, 5}) << "\n"; // "TCMA"
    cout << solution({"TR", "RT", "TR"}, {7, 1, 3}) << "\n"; // "RCJA"

    return 1;

}