#include "bits/stdc++.h"
using namespace std;




int solution(vector<vector<string>> board, int h, int w) {
    vector<vector<int> > tmap = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

    int answer = 0;
    for(int i = 0; i < tmap.size(); i++){
    
        if(h + tmap[i][0] < 0 || w + tmap[i][1] < 0) continue;
        else if (h + tmap[i][0] >= board.size() || w + tmap[i][1] >= board[0].size()) continue;
        if(board[h][w] == board[h + tmap[i][0]][w + tmap[i][1]]) answer++;
    
    }
    return answer;
}

int main(void) {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cout << solution({{"blue", "red", "orange", "red"}, {"red", "red", "blue", "orange"}, {"blue", "orange", "red", "red"}, {"orange", "orange", "red", "blue"}}, 1, 1) << "\n"; // 2
    cout << solution({{"yellow", "green", "blue"}, {"blue", "green", "yellow"}, {"yellow", "blue", "blue"}}, 0, 1) << "\n"; // 1

    return 0;
}