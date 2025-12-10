#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;

    for(auto str: strlist){
        answer.push_back(str.size());
    }

    return answer;
}

int main(void) {

    auto res = solution({"We", "are", "the", "world!"}); // [2, 3, 3, 6]


    for(auto t : res){
        cout << t << ",";
    }
    cout << "\n";
    return 0;
}