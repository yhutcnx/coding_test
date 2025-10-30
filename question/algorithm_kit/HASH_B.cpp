#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;

    set<int> s;
    int len = nums.size();

    for(auto num : nums){
        s.insert(num);
    }

    answer = s.size();
    if(answer > len / 2) answer = len / 2;
    return answer;
}

int main(void) {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cout << solution({3,1,2,3}) << "\n"; // 2
    cout << solution({3,3,3,2,2,4}) << "\n"; // 3
    cout << solution({3,3,3,2,2,2}) << "\n"; // 2

    return 0;
}