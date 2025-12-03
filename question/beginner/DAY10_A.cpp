#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> dot) {
    int answer = 0;

    
    if(dot[0] > 0 && dot[1] > 0) answer = 1;
    else if (dot[0] < 0 && dot[1] > 0) answer = 2;
    else if (dot[0] < 0 && dot[1] < 0) answer = 3;
    else if (dot[0] > 0 && dot[1] < 0) answer = 4;
    return answer;
}

int main(void) {

    cout << solution({2, 4}) << "\n"; // 1
    cout << solution({-7, 9}) << "\n"; // 2


    return 0;
}