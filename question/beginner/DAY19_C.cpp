#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;

    for(auto num : array) if(num == n) answer++;

    return answer;
}

int main(void) {

    cout << solution({1, 1, 2, 3, 4, 5}, 1) << "\n"; // 2

    return 0;
}