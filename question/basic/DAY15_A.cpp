#include "bits/stdc++.h"
using namespace std;


vector<int> solution(vector<int> arr) {
    vector<int> answer;

    for(auto num : arr){
        if(num & 1){
            if(num < 50) answer.push_back(num * 2);
            else answer.push_back(num);
        }
        else {
            if(num >= 50) answer.push_back(num >> 1);
            else answer.push_back(num);
        }

    }

    return answer;
}

int main(void) {
    
    auto res = solution({1, 2, 3, 100, 99, 98});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [2, 2, 6, 50, 99, 49]

    return 0;

}
