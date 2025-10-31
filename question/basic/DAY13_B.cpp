#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    answer.insert(answer.end(), num_list.begin() + n, num_list.end());
    answer.insert(answer.end(), num_list.begin(), num_list.begin() + n);
    
    return answer;
}
int main(void) {
    
    auto res = solution({2, 1, 6}, 1);
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [1, 6, 2]

    res = solution({5, 2, 1, 7, 5}, 3);
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [7, 5, 5, 2, 1]

    return 0;

}
