#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;

    int powAll = 0;
    int timesAll = 1;

    for(auto num : num_list){
        powAll += num;
        timesAll *= num;
    }
    powAll = pow(powAll, 2);

    if(timesAll < powAll) answer = 1;
    else answer = 0;


    return answer;
}

int main(void) {
    cout << solution({3, 4, 5, 2, 1}) << "\n"; // 1
    cout << solution({5, 7, 8, 3}) << "\n"; // 0
    return 0;
}