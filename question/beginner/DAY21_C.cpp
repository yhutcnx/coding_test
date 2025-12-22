#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;

    int t_max = max(sides[0], sides[1]);
    int t_min = min(sides[0], sides[1]);

    // 긴변을 추가할 경우
    answer += (t_max + t_min) - t_max - 1;


    answer += t_max - (t_max - t_min);





    return answer;
}

int main(void) {

    cout << solution({1, 2}) << "\n"; // 1
    cout << solution({3, 6}) << "\n"; // 5
    cout << solution({11, 7}) << "\n"; // 13

    return 0;
}