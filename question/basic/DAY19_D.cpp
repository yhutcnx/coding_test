#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    for(int i = 0; i < arr.size(); i++){

        if(answer.empty()){
            answer.push_back(arr[i]);
        }
        else if(answer[answer.size() - 1] == arr[i]){
            answer.pop_back();
        }
        else if (answer[answer.size() - 1] != arr[i]){
            answer.push_back(arr[i]);
        }
    }

    if(answer.empty()) answer.push_back(-1);

    return answer;
}

int main(void) {

    auto res = solution({0, 1, 1, 1, 0});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [0, 1, 0]
    res = solution({0, 1, 0, 1, 0});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [0, 1, 0, 1, 0]
    res = solution({0, 1, 1, 0});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [-1]

    return 0;
}
