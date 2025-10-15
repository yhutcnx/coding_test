#include "bits/stdc++.h"
using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    
    answer = max(stoi(to_string(a) + to_string(b)), stoi(to_string(b) + to_string(a)));

    return answer;
}

int main(void) {

    cout << solution(9, 91) << "\n"; // "991"
    cout << solution(89, 8) << "\n"; // "898"

    return 0;
}