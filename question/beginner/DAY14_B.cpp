#include "bits/stdc++.h"
using namespace std;


int solution(int order) {
    int answer = 0;
    string t = to_string(order);

    for(auto tt : t){
        int a = tt - '0';
        if(a > 0 && a % 3 == 0){
            answer++;
        }
    }
    return answer;
}

int main(void) {

    cout << solution(3) << "\n"; // 1

    return 0;
}