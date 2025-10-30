#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    vector<int> t = arr;

    int startIdx = find(t.begin(), t.end(), 2) - t.begin();

    if(startIdx == t.size()){
        answer.push_back(-1);
        return answer;
    }
 
    reverse(t.begin(), t.end());
    int lastIdx = find(t.begin(), t.end(), 2) - t.begin();

    answer = {arr.begin() + startIdx, arr.begin() + (arr.size() - lastIdx)};

    return answer;
}

int main(void) {
    
    auto res = solution({1, 2, 1, 4, 5, 2, 9});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [2, 1, 4, 5, 2]

    res = solution({1, 2, 1});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [2]

    res = solution({1, 1, 1});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [-1]

    res = solution({1, 2, 1, 2, 1, 10, 2, 1});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [2, 1, 2, 1, 10, 2]

    return 0;

}
