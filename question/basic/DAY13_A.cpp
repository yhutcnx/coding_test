#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer = {num_list.begin() + n - 1, num_list.end()};
    return answer;
}

int main(void) {
    
    auto res = solution({2, 1, 6}, 3);
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [6]

    res = solution({5, 2, 1, 7, 5}, 2);
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [6]

    return 0;

}
