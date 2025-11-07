#include "bits/stdc++.h"
using namespace std;

int solution(string binomial) {
    int answer = 0;
    vector<string> ops = {"+", "-", "/", "*"};
    for(auto op : ops){
        size_t pos = binomial.find(op);
        if(pos == string::npos) continue;

        string lValue = binomial.substr(0, pos);
        string rValue = binomial.substr(pos + 1, binomial.size());

        int l = stoi(lValue);
        int r = stoi(rValue);
        if(op == "+"){
            answer = l + r;
        }
        else if (op == "-"){
            answer = l - r;

        }
        else if (op == "/"){
            answer = l / r;

        }
        else {
            answer = l * r;
        }
    }
    
    return answer;
}

int main(void) {
    // cout << solution("43 + 12") << endl; // 55
    // cout << solution("0 - 7777") << endl; // -7777
    cout << solution("40000 * 40000") << endl; // 1600000000
    return 0;
}
