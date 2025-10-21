#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;

    for(int i = 0; i < arr.size();){
        if(stk.size() == 0) {
            stk.push_back(arr[i]);
            i++;
        }
        else {
            if(stk[stk.size() - 1] < arr[i]){
                stk.push_back(arr[i]);
                i++;
            }
            else {
                stk.pop_back();
            }
        }
    }
    return stk;
}

int main(void) {

    vector<int> res;
    res = solution({1, 4, 2, 5, 3});
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << "\n"; // [1, 2, 3]

    return 0;

}
