#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    auto t = max_element(array.begin(), array.end());

    answer.push_back(*t);
    answer.push_back(t - array.begin());
    
    return answer;
}

int main(void) {

    auto res = solution({9, 10, 11, 8}); // [8, 1]
    for(auto t : res){
        cout << t << ",";
    }
    cout << "\n";
    return 0;
}