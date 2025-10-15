#include "bits/stdc++.h"
using namespace std;


int solution(int n, vector<vector<int>> computers) {
    int answer = 0;

    int check[201] = {0};
    queue<int> q;

    function<void()> bfs = [&](){
        if(q.empty()) {
            answer++;
            return;
        }

        int thisTarget = q.front();
        q.pop();
            
        for(int i = 0; i < computers[thisTarget].size(); i++){
            
            if(thisTarget == computers[thisTarget][i]) continue;
            if(check[thisTarget]) continue;
            q.push(i);
        }

        check[thisTarget] = 1;
        bfs();
    };

    function<void()> dfs = [&](){
        if(q.empty()) {
            answer++;
            return;
        }

        int thisTarget = q.front();
        q.pop();
        check[thisTarget] = 1;
            
        for(int i = 0; i < computers[thisTarget].size(); i++){
            if(check[thisTarget]) continue;
            if(!computers[thisTarget][i]) continue;
            q.push(i);
        }

        dfs();
    };

    for(int i = 0; i < n; i++){
        if(check[i]) continue;
        q.push(i);
        dfs();
    }

    return answer;
}

int main(void) {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cout << solution(3, {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}}) << "\n";
    cout << solution(3, {{1, 1, 0}, {1, 1, 1}, {0, 1, 1}}) << "\n";

    return 0;
}