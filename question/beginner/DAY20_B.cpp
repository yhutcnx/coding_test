#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    answer.push_back(board[0] - (board[0] / 2 + 1));
    answer.push_back(board[1] - (board[1] / 2 + 1));

    
    for(auto key : keyinput){

        if(key == "left") {
            answer[0]--;
        }
        else if (key == "right"){
            answer[0]++;
        }
        else if (key == "up"){
            answer[1]++;
        }
        else {
            answer[1]--;
        }

        if(answer[0] >= board[0]) answer[0] = board[0] - 1;
        else if(answer[0] < 0) answer[0] = 0;
        else if(answer[1] >= board[1]) answer[1] = board[1] - 1;
        else if(answer[1] < 0) answer[1] = 0;
    }

    answer[0] -= ((board[0] / 2));
    answer[1] -= ((board[1] / 2));

    return answer;
}

int main(void) {

    // auto res = solution({"up"}, {1, 1}); // [2, 1]
    auto res = solution({"left", "right", "up", "right", "right"}, {11, 11}); // [2, 1]
    for(auto t : res){
        cout << t << ",";
    }
    cout << "\n";
    return 0;
}