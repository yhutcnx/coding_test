#include "bits/stdc++.h"
using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    return answer;
}

int main(void) {
    
    auto res = solution(3, {1, 5, 2}, {1, 2, 3, 4, 5, 6, 7, 8, 9});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [2, 3, 4, 5, 6]

    res = solution(4, {1, 5, 2}, {1, 2, 3, 4, 5, 6, 7, 8, 9});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [2, 4, 6]
    
    return 0;

}
