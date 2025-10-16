#include "bits/stdc++.h"
using namespace std;

int solution(string ineq, string eq, int n, int m) {

    if (ineq == "<" && eq == "="){
        return n <= m;
    }
    else if (ineq == "<" && eq == "!"){
        return n < m;
    }
    else if (ineq == ">" && eq == "="){
        return n >= m;
    }
    else {
        return n > m;
    }
}

int main(void) {
    cout << solution("<", "=", 20, 50) << "\n"; // 1
    cout << solution(">", "!", 31, 78) << "\n"; // 0
    return 0;
}