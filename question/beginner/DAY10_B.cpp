#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;

    for(int i = 0; i < num_list.size(); i += n){
        vector<int> t;

        for(int j = i; j < i + n; j++){
            t.push_back(num_list[j]);
        }
        answer.push_back(t);
    }
    
    return answer;
}

int main(void) {

    auto res = solution({1, 2, 3, 4, 5, 6, 7, 8}, 2);

    return 0;
}