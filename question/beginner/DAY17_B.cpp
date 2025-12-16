#include "bits/stdc++.h"
using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;


    for(auto num : numlist){
        if(num % n == 0) answer.push_back(num);
    }

    return answer;
}

int main(void) {

    auto res = solution(3, {4, 5, 6, 7, 8, 9, 10, 11, 12}); // [6, 9, 12]
    for(auto t : res){
        cout << t << ",";
    }
    cout << "\n";
    return 0;
}