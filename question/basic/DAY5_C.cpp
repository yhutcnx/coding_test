#include "bits/stdc++.h"
using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;

    if((a != b && a != c && b != c)){
        answer = a + b + c;
    }
    else if(a == b && a == c){
        answer = (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2)) * (pow(a, 3) + pow(b, 3) + pow (c, 3));
    }
    else {
        answer = (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2));
    }
    return answer;
}

int main(void) {
    // cout << solution(2, 6, 1) << "\n"; // 9
    cout << solution(5, 3, 3) << "\n"; // 473
    // cout << solution(4, 4, 4) << "\n"; // 110592
    return 0;
}