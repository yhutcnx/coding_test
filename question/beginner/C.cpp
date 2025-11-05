#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> common) {
    int answer = 0;

    // true -> 등차, false -> 등비
    bool flags = false;

    int t = 0;
    t = common[common.size() - 1] - common[common.size() - 2];
    if(t == common[common.size() - 2] - common[common.size() - 3]) flags = true;

    if(flags){
        answer = common[common.size() - 1] + t;
    }
    else {
        t = common[common.size() - 1] / common[common.size() - 2];
        answer = common[common.size() - 1] * t;
    }

    return answer;
}

int main(void) {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cout << solution({1, 2, 3, 4}) << "\n"; // 5
    cout << solution({2, 4, 8}) << "\n"; // 16

    return 0;
}