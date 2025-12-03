#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> box, int n) {

    // 너비를 구하는데, 혹여 그냥 너비를 구했다가는 남아서 주사위가 들어가지 못하는 잉여공간까지 계산하기에  /n *n을 해줌.
    int boxWeight = ((box[0] / n) * n) * ((box[1] / n) * n) * ((box[2] / n) * n);
    int diceWeight = n * n * n;

    return boxWeight / diceWeight;
}

int main(void) {

    cout << solution({1, 1, 1}, 1) << "\n"; // 1

    return 0;
}