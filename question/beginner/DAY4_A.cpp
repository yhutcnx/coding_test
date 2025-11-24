#include "bits/stdc++.h"
using namespace std;

int solution(int n) {


    int answer = 1;
    for(int i = 1; i < 16; i++){
        if(n >= (i - 1) * 7 && n <= i * 7) return i;
    }

    return answer;


}

int main(void) {

    cout << solution(7) << "\n"; // 1
    cout << solution(1) << "\n"; // 1
    cout << solution(15) << "\n"; // 3

    return 0;
}