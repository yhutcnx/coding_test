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

        std::cout << thisTarget << " ";
        q.pop();
            
        for(int i = 0; i < computers[thisTarget].size(); i++){
            
            if(thisTarget == computers[thisTarget][i]) continue;
            if(check[thisTarget]) continue;
            q.push(i);
        }

        check[thisTarget] = 1;
        bfs();
    };

    function<void(int)> dfs = [&](int index){

        if(check[index]) return;
        check[index] = 1;

        if(q.empty()) {
            answer++;
            return;
        }

        for(int i = 0; i < computers[index].size(); i++){
            if(!computers[index][i]) continue;
            q.push(i);
            dfs(q.front());
            q.pop();
        }

    };

    for(int i = 0; i < n; i++){
        if(check[i]) continue;
        dfs(i);
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