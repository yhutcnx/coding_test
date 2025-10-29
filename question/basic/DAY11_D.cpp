#include "bits/stdc++.h"
using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> answer;

    for(int i = start_num; i >= end_num; i--){
        answer.push_back(i);
    }
    return answer;
}

int main(void) {
    
    auto res = solution(10, 3);
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [10, 9, 8, 7, 6, 5, 4, 3]
    
    return 0;

}
