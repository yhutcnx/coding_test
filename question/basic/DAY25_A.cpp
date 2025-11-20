#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> solution(int n) {
    
    vector<vector<int> > answer;

    // nxn 만큼 배열 초기화
    for(int i = 0; i < n; i++){
        vector<int> t(n);
        answer.push_back(t);
    }

    // 0 : right
    // 1 : down
    // 2 : left 
    // 3 : up
    int flags = 0;

    // n이 짝수일때는 가운데 네칸 중 왼쪽 아래에서 끝남 (6 -> 3,2) (4 -> 2,1)
    // n이 홀수일때는 정확히 가운데 끝남 (5 -> 2,2)

    int cnt = 1;
    int i = 0, j = 0;
    while(true) {

        answer[i][j] = cnt++;

        // 마지막 위치인 경우
        if(!(n & 1) && (i == n / 2) && (j == n / 2 - 1)) {
            break;
        }
        else if((n & 1) && (i == n / 2) && (j == n / 2)) {
            break;
        }

        // 가는 방향이 이미 간 방향이거나, 아니면 사이즈를 초과할 경우에 대한 처리
        switch (flags % 4) {
        case 0:
            if(j + 1 >= answer[i].size() || answer[i][j + 1] != 0) flags++;
            break;
        case 1:
            if(i + 1 >= answer.size() || answer[i + 1][j] != 0) flags++;
            break;
        case 2:
            if(j - 1 < 0 || answer[i][j - 1] != 0) flags++;
            break;
        case 3:
            if(i - 1 < 0 || answer[i - 1][j] != 0) flags++;
            break;
        }

        // 재설정 된 방향에 대해서 좌표 이동
        switch (flags % 4) {
        case 0:
            j++;
            break;
        case 1:
            i++;
            break;
        case 2:
            j--;
            break;
        case 3:
            i--;
            break;
        }

    }

    return answer;
}

int main(void) {

    auto res = solution(4);
    for(auto t1 : res){
        cout << "[";
        for(auto t2 : t1){
            cout << t2 << ", ";
        }
        cout << "]";
    }
    cout << "\n"; // [[1, 2, 3, 4], [12, 13, 14, 5], [11, 16, 15, 6], [10, 9, 8, 7]]

    res = solution(5);
    for(auto t1 : res){
        cout << "[";
        for(auto t2 : t1){
            cout << t2 << ", ";
        }
        cout << "]";
    }
    cout << "\n"; // [[1, 2, 3, 4, 5], [16, 17, 18, 19, 6], [15, 24, 25, 20, 7], [14, 23, 22, 21, 8], [13, 12, 11, 10, 9]]

    return 0;
}
