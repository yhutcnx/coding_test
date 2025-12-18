#include "bits/stdc++.h"
using namespace std;


int solution(vector<int> array, int height) {
    int answer = 0;

    for(auto num : array) if(num > height) answer++;

    return answer;
}

int main(void) {

    cout << solution({149, 180, 192, 170}, 167) << "\n"; // 3

    return 0;
}