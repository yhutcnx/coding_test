#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> num_list) {
    int answer = -1;

    for(int i = 0; i < num_list.size(); i++){
        if(num_list[i] < 0) {
            answer = i;
            break;
        }
    }

    return answer;
}

int main(void) {
    cout << solution({12, 4, 15, 46, 38, -2, 15}) << endl; // 5
    return 0;
}
