#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    return answer;
}

int main(void) {
    
    auto res = solution({0, 1, 2, 3, 4}, {{0, 1}, {1, 2}, {2, 3}});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [1, 3, 4, 4, 4]

    return 0;

}
