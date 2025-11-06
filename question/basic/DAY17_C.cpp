#include "bits/stdc++.h"
using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;

    for(int i = 0; i < strArr.size(); i++){
        string str = strArr[i];
        if(str.find("ad") == string::npos){
            answer.push_back(str);
        }


    }
    return answer;
}

int main(void) {
    
    auto res = solution({"and","notad","abcd"});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // ["and","abcd"]
    res = solution({"there","are","no","a","ds"});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // ["there","are","no","a","ds"]

    return 0;

}
