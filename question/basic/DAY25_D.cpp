#include "bits/stdc++.h"
using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0;

    for(int i = 0; i <= k && i < board.size(); i++){
        for(int j = 0; j <= k && j < board[i].size(); j++){
            if(i + j > k) break;
            answer += board[i][j];
        }
    }

    return answer;
}

int main(void) {

    cout << solution({{0, 1, 2},{1, 2, 3},{2, 3, 4},{3, 4, 5}} , 2) << endl; // 8

    return 0;
}
