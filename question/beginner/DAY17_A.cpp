#include "bits/stdc++.h"
using namespace std;

int solution(int num, int k) {
    int answer = 0;
 
    string numStr = to_string(num);
    size_t s = numStr.find(k + '0');
    if(s == string::npos) answer = -1;
    else answer = s + 1;

    return answer;
}

int main(void) {

    cout << solution(29183, 1) << "\n"; // 3

    return 0;
}