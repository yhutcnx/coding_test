#include "bits/stdc++.h"
using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;

    size_t start = 0;
    size_t end = myString.find("x", start);

    if(end == string::npos) {
        answer.push_back(0);
        return answer;
    }

    answer.push_back(end - start);
    start = end;


    while(true){
        size_t t_end = myString.find("x", start + 1);
        if(t_end == string::npos) {
            answer.push_back(myString.size() - end - 1);
            break;
        }
        end = t_end;
        answer.push_back(end - start - 1);
        start = end;
    }   
    
    return answer;
}

int main(void) {

    auto res = solution("oxooxoxxox");
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [1, 2, 1, 0, 1, 0]
    res = solution("xabcxdefxghi");
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [0, 3, 3, 3]

    return 0;
}
