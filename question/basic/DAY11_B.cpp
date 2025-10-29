#include "bits/stdc++.h"
using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    for(int i = k; i <= n; i += k){
        answer.push_back(i);
    }
    return answer;
}

int main(void) {
    
    auto res = solution(10, 3);
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [3, 6, 9]

    res = solution(15, 5);
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [5, 10, 15]
    
    return 0;

}
