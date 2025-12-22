#include "bits/stdc++.h"
using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;


    int boardSize = board.size();
    vector<vector<int> > resMap;

    for(auto b : board) {
        vector<int> vec(boardSize);
        resMap.push_back(vec);
    }

    for(int i = 0; i < boardSize; i++){
        for(int j = 0; j < boardSize; j++){
            if(board[i][j]){

                for(int m = i - 1; m <= i + 1; m++){
                    if(m < 0 || m >= boardSize) continue;
                    for(int n = j - 1; n <= j + 1; n++){
                        if(n < 0 || n >= boardSize) continue;
                        resMap[m][n] = 1;
                    }
                }
            }
        }
    }

    for(int i = 0; i < boardSize; i++){
        for(int j = 0; j < boardSize; j++){
            answer += resMap[i][j];
            // cout << resMap[i][j] << ",";
        }
    }

    return boardSize * boardSize - answer;
}

int main(void) {

    cout << solution({{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 0, 0}}) << "\n"; // 16

    return 0;
}