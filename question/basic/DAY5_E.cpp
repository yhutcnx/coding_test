#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;

    string oddStr = "";
    string evenStr = "";

    for(auto num : num_list){
        if(num & 1) oddStr += to_string(num);
        else evenStr += to_string(num);
    }

    answer = stoi(oddStr) + stoi(evenStr);
    return answer;
}

int main(void) {
    cout << solution({3, 4, 5, 2, 1}) << "\n"; // 393
    cout << solution({5, 7, 8, 3}) << "\n"; // 581
    return 0;
}