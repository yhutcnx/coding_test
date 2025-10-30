#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    return answer;
}

int main(void) {
    
    auto res = solution({4, 2, 6, 1, 7, 6}, 2);
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [4, 6, 7]

    res = solution({4, 2, 6, 1, 7, 6}, 4);
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [4, 7]

    return 0;

}
