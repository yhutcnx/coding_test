#include "bits/stdc++.h"
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> st;

    for(auto move: moves){

        for(int i = 0; i < board.size(); i++){
            int t = board[i][move - 1];
            if(t){
                st.push_back(t);
                board[i][move - 1] = 0;
                break;
            }
        }

        if(st.size() < 2) continue;
        
        if(st[st.size() - 1] == st[st.size() - 2]){
            st.pop_back();
            st.pop_back();
            answer++;
            answer++;
        }
    }

    return answer;
}

int main(void) {

    cout << solution({{0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1}}, {1,5,3,5,1,2,1,4}) << "\n"; // 4

    return 1;

}