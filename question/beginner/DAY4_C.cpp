#include "bits/stdc++.h"
using namespace std;

int solution(int slice, int n) {
    int cnt = 1;
    while(true){
        int t = cnt * slice;
        if(t >= n) return cnt;
        cnt++;
    }

    return cnt;
}

int main(void) {

    cout << solution(7, 10) << "\n"; // 2
    cout << solution(4, 12) << "\n"; // 3

    return 0;
}