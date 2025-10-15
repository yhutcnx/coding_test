#include "bits/stdc++.h"
using namespace std;


int solution(vector<int> numbers, int target) {
    int answer = 0;

    function<void(int, int)> dfs = [&](int index, int now) {

        if(index == numbers.size()) {
            if(now == target) answer++;
            return;
        }

        int num = numbers[index];

        dfs(index + 1, now + num);
        dfs(index + 1, now - num);

    };

    dfs(0, 0);
    return answer;
}

int main(void) {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cout << solution({1, 1, 1, 1, 1}, 3) << "\n";
    cout << solution({4, 1, 2, 1}, 4) << "\n";

    return 0;
}