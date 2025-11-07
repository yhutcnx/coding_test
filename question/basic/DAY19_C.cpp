#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    return answer;
}

int main(void) {

    auto res = solution({3, 2, 4, 1, 3}, {true, false, true, false, false});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [3, 3, 3, 3, 4, 4, 4, 4]

    return 0;
}
