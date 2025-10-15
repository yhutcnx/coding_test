#include "bits/stdc++.h"
using namespace std;


int main(void) {
    int n;
    cin >> n;
    
    // n이 1과 앤드 연산 시 true 면 무조건 홀수
    if(n & 1) std::cout << n << " is odd" << std::endl;
    else std::cout << n << " is even" << std::endl;
    

    return 0;
}