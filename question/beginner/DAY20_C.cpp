#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> numbers) {
    int answer = (pow(2, 31)) * -1;
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            answer = max(answer, numbers[i] * numbers[j]);
        }
    }
    return answer;
}

int main(void) {

    cout << solution({1, 2, -3, 4, -5}) << "\n"; // 15

    return 0;
}