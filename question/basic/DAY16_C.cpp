#include "bits/stdc++.h"
using namespace std;

vector<string> solution(vector<string> strArr) {

    for(int i = 0; i < strArr.size(); i++){
        if(i & 1) transform(strArr[i].begin(), strArr[i].end(), strArr[i].begin(), ::toupper);
        else transform(strArr[i].begin(), strArr[i].end(), strArr[i].begin(), ::tolower);
    }
    return strArr;
}

int main(void) {
    
    auto res = solution({"AAA","BBB","CCC","DDD"});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // {"aaa","BBB","ccc","DDD"}

    res = solution({"aBc","AbC"});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // {"abc","ABC"}

    return 0;

}
