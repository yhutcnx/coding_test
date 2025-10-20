#include "bits/stdc++.h"
using namespace std;

string solution(vector<int> numLog) {
    string answer = "";


    for(int i = 1; i < numLog.size(); i++){
        int t = numLog[i] - numLog[i - 1];

        switch (t){
        case 1:
            answer.push_back('w');
            break;
        case -1:
            answer.push_back('s');
            break;
        case 10:
            answer.push_back('d');
            break;
        case -10:
            answer.push_back('a');
            break;
        }
    }

    return answer;
}

int main(void) {
    cout << solution({0, 1, 0, 10, 0, 1, 0, 10, 0, -1, -2, -1}) << "\n"; // "wsdawsdassw"
    return 0;
}