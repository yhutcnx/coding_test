#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;

    answer.insert(answer.end(), arr.begin() + intervals[0][0], arr.begin() + intervals[0][1] + 1);
    answer.insert(answer.end(), arr.begin() + intervals[1][0], arr.begin() + intervals[1][1] + 1);

    return answer;
}

int main(void) {
    
    auto res = solution({1, 2, 3, 4, 5}, {{1, 3}, {0, 4}});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [2, 3, 4, 1, 2, 3, 4, 5]

    return 0;

}
