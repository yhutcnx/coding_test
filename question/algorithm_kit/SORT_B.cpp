#include "bits/stdc++.h"
using namespace std;

string solution(vector<int> numbers) {
    string answer = "";

    sort(numbers.begin(), numbers.end(), [&](int a, int b) {
        return to_string(b) < to_string(a) && to_string(b).length() >= to_string(a).length();
    });

    for(auto number: numbers){
        answer += to_string(number);
    }

    return answer;
}

int main(void) {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cout << solution({9, 98, 5}) << endl; // 6210
    cout << solution({6, 10, 2}) << endl; // 6210
    cout << solution({3, 30, 34, 5, 9}) << endl; // 9534330
    
    return 0;
}