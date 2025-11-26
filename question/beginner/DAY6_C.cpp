#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer(2);

    for(auto num : num_list){
        if(num & 1) answer[1]++;
        else answer[0]++;
    }
    return answer;
}

int main(void) {
    vector<int> res;

    res = solution({1, 2, 3, 4, 5});
    
    for(auto t:res){
        cout << t << ",";
    }
    cout << "\n"; // [2, 3]

    return 0;
}