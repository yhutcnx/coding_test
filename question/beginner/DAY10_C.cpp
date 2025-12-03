#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = (k * 2 - 1) % numbers.size();
    if (answer <= 0) answer = numbers.size();
    return answer;
}


// [1, 2, 3, 4]	2	3
// [1, 2, 3, 4, 5, 6]	5	3
// [1, 2, 3]	3	2


// 1 2 3 4 1 2 3 4 
// o   o 
// 1 2 3 4 5 6 1 2 3 4 5 6 1 2 3 4 5 6
// o   o   o   o   o 
// 1 2 3 1 2 3 1 2 3
// o   o   o



int main(void) {

    cout << solution({1, 2, 3}, 2) << "\n"; // 3

    return 0;
}