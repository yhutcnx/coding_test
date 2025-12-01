#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer = {numbers.begin() + num1, numbers.begin() + num2 + 1};

    return answer;
}

int main(void) {
    vector<int> res;

    res = solution({1, 2, 3, 4, 5}, 1, 1);
    
    for(auto t:res){
        cout << t << ",";
    }
    cout << "\n"; // [2, 3, 4]


    res = solution({1, 3, 5, 6}, 0, 3);
    
    for(auto t:res){
        cout << t << ",";
    }
    cout << "\n"; // [3, 5]

    return 0;
}