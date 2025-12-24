#include "bits/stdc++.h"
using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;

    int m[300] = {0};

    for(auto line : lines){
        for(int i = line[0] + 100; i < line[1] + 100; i++){
            m[i]++;
        }
    }

    for(int i = 0; i < 300; i++){
        if(m[i] > 1) answer++;
    }


    return answer;
}

int main(void) {

    cout << solution({{0, 1}, {2, 5}, {3, 9}}) << "\n"; // 2

    return 0;
}