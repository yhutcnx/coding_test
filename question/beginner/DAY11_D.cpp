#include "bits/stdc++.h"
using namespace std;

int solution(int n) {
    int answer = 0;


    std::function<int(int)> factorial = [&](int num) {
        if(num <= 1) return 1;
        return num * factorial(num - 1);
    };

    for(int i = 1; i <= 10; i++){
        int r = factorial(i);
        if(n == r) return i;
        else if (n < r) return i - 1;
    }
    return answer;
}

int main(void) {

    cout << solution(3628800) << "\n"; // 10
    cout << solution(7) << "\n"; // 3

    return 0;
}