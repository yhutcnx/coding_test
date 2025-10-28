#include "bits/stdc++.h"
using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    for(int i = r; i < code.size(); i += q){
        answer.push_back(code[i]);
    }
    return answer;
}

int main(void) {
    
    cout << solution(3, 1, "qjnwezgrpirldywt") << endl; // jerry
    cout << solution(1, 0, "programmers") << endl; // programmers

    return 0;

}
