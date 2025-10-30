#include "bits/stdc++.h"
using namespace std;


vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for(int i = 0; i < commands.size(); i++) {
        int s = commands[i][0];
        int e = commands[i][1];
        int k = commands[i][2];
        
        auto t = vector<int>(array.begin() + s - 1, array.begin() + e);
        sort(t.begin(), t.end());
        answer.push_back(t[k - 1]);

    }

    return answer;
}

int main(void) {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    vector<int> res = solution({1, 5, 2, 6, 3, 7, 4}, {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}});
    
    for(auto t : res){
        cout << t << ", ";
    }
    cout << "\n"; // [5, 6, 3]

    return 0;
}