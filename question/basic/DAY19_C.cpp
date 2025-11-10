#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flags) {
    vector<int> answer;

    for(int i = 0; i < arr.size(); i++){
        int num = arr[i];
        int flag = flags[i];

        if(flag){
            for(int i = 0; i < num * 2; i++) answer.push_back(num);
        }
        else {
            for(int i = 0; i < num; i++) answer.pop_back();
        }
    }
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
