#include "bits/stdc++.h"
using namespace std;


vector<string> solution(string my_string) {
    vector<string> answer;
    return answer;
}

int main(void) {

    vector<string> res;
    res = solution("banana"); // ["a", "ana", "anana", "banana", "na", "nana"]
    for(auto t : res){
        cout << t << ", ";
    }
    cout << "\n";

    res = solution("programmers"); // ["ammers", "ers", "grammers", "mers", "mmers", "ogrammers", "programmers", "rammers", "rogrammers", "rs", "s"]
    for(auto t : res){
        cout << t << ", ";
    }
    cout << "\n";

    return 0;

}
