#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end(), [&] (int a, int b){return a > b;});
    return numbers[0] * numbers[1];
}

int main(void) {

    cout << solution({1, 2, 3, 4, 5}) << "\n"; // 20
    cout << solution({0, 31, 24, 10, 1, 9}) << "\n"; // 744

    return 0;
}