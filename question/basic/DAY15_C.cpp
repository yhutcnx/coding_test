#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;

    for(auto num : num_list){
        while(true){
            if(num == 1) break;
            if(num & 1) num = (num - 1) >> 1;
            else num = num >> 1;

            answer++;
        }
    }

    return answer;
}

int main(void) {
    cout << solution({12, 4, 15, 1, 14}) << endl; // 11
    return 0;
}
