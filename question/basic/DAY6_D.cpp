#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;



    for(auto query : queries){
        int c1 = query[0];
        int c2 = query[1];
        int t = -1;

        t = answer[c1];
        answer[c1] = answer[c2];
        answer[c2] = t;
    }


    return answer;
}

int main(void) {

    auto res = solution({0, 1, 2, 3, 4}, {{0, 3}, {1, 2}, {1, 4}});
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << "\n"; // {3, 4, 1, 0, 2}


    return 0;
}