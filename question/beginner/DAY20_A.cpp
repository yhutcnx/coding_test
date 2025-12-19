#include "bits/stdc++.h"
using namespace std;


int solution(vector<vector<int>> dots) {
    int answer = 0;


    int minWidth = 256;
    int maxWidth = -256;
    int minHeight = 256;
    int maxHeight = -256;


    for(auto dot : dots){
        maxWidth = max(maxWidth, dot[0]);
        minWidth = min(minWidth, dot[0]);
        maxHeight = max(maxHeight, dot[1]);
        minHeight = min(minHeight, dot[1]);
    }

    answer = (maxWidth - minWidth) * (maxHeight - minHeight);
    return answer;
}

int main(void) {

    cout << solution({{1, 1}, {2, 1}, {2, 2}, {1, 2}}) << "\n"; // 4

    return 0;
}