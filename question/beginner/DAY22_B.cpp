#include "bits/stdc++.h"
using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;

    vector<vector<int> > t = {{0, 1, 2, 3}, {0, 2, 1, 3}, {0, 3, 1, 2}};

    for(auto tt : t){

        int oneCaseWidth = dots[tt[0]][0] - dots[tt[1]][0];
        int oneCaseHeight = dots[tt[0]][1] - dots[tt[1]][1];

        int twoCaseWidth = dots[tt[2]][0] - dots[tt[3]][0];
        int twoCaseHeight = dots[tt[2]][1] - dots[tt[3]][1];

        answer = oneCaseHeight * twoCaseWidth == oneCaseWidth * twoCaseHeight;

        if(answer) return answer;

    }

    return answer;
}

int main(void) {

    cout << solution({{1, 4}, {9, 2}, {3, 8}, {11, 6}}) << "\n"; // 1
    cout << solution({{3, 5}, {4, 1}, {2, 4}, {5, 10}}) << "\n"; // 0

    return 0;
}