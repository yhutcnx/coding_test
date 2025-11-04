#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;

    if(num_list.size() < 11) answer++;

    for(auto num : num_list){

        if(num_list.size() >= 11){
            answer += num;
        }
        else {
            answer *= num;
        }
    }
    

    return answer;
}

int main(void) {
    cout << solution({3, 4, 5, 2, 5, 4, 6, 7, 3, 7, 2, 2, 1}) << endl; // 51
    cout << solution({2, 3, 4, 5}) << endl; // 120
    return 0;
}
