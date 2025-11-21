#include "bits/stdc++.h"
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;


    for(int i = 1; i <= n; i += 2) answer.push_back(i);

    return answer;
}

int main(void) {
    vector<int> res;

    res = solution(10);
    
    for(auto t:res){
        cout << t << ",";
    }
    cout << "\n"; // [1, 3, 5, 7, 9]

    return 0;
}