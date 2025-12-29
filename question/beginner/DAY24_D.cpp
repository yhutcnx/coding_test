#include "bits/stdc++.h"
using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;

    for(int m = i; m <= j; m++){

        string str = to_string(m);

        for(int n = 0; n < str.size(); n++){
            if(str[n] == k + '0') answer++;
        }

    }

    return answer;
}

int main(void) {

    cout << solution(1, 13 ,1) << "\n"; // 6
    cout << solution(10, 50, 5) << "\n"; // 5
    return 0;
}