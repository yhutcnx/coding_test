#include "bits/stdc++.h"
using namespace std;


vector<int> solution(string my_string) {
    vector<int> answer(52);

    cout << answer.size() << endl;
    for(auto c : my_string) {
        if(c >= 'a' && c <= 'z') answer[c - 'a' + 26]++;
        else answer[c - 'A']++;
    } 
    return answer;
}

int main(void) {
    
    auto res = solution("Programmers");
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 2, 0, 1, 0, 0, 3, 1, 0, 0, 0, 0, 0, 0, 0]

    return 0;

}
