#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;

    for(auto query : queries){
        int s = query[0];
        int e = query[1];
        int k = query[2];
        for(int i = s; i <= e; i++){
            if(i % k == 0){
                answer[i]++;
            }
        }

    }
    return answer;
}

int main(void) {

    vector<int> res;
    res = solution({0, 1, 2, 4, 3}, {{0, 4, 1}, {0, 3, 2}, {0, 3, 3}});
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << "\n"; // [3, 2, 4, 6, 4]

    return 0;

}
