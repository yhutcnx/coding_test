#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;

    for(int i = 0; i < absolutes.size(); i++){
        answer += ((signs[i] ? 1 : -1) * absolutes[i]);
    }

    return answer;
}

int main(void) {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cout << solution({4, 7, 12}, {true, false, true}) << "\n"; // 2
    cout << solution({1, 2, 3}, {false, false, true}) << "\n"; // 2

    return 0;
}