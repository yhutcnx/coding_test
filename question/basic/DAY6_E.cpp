#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    for(auto query : queries){
        int t1 = query[0];
        int t2 = query[1];
        int k = query[2];

        int min = 1000001;
        for(int i = t1; i <= t2; i++){
            if(arr[i] > k) {
                if(arr[i] < min){
                    min = arr[i];
                }
            }
        }

        if (min == 1000001) answer.push_back(-1);
        else answer.push_back(min);
    }

    return answer;
}

int main(void) {

    auto res = solution({0, 1, 2, 4, 3}, {{0, 4, 2},{0, 3, 2},{0, 2, 2}});
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << "\n"; // {3, 4, 1}


    return 0;
}