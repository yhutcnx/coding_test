#include "bits/stdc++.h"
using namespace std;

string solution(string a, string b) {


    string answer = "";
    bool upFlag = false;

    int lastSize = max(a.size(), b.size());
    for(int i = 0; i < lastSize; i++) {

        int aInt = (i >= a.size()) ? 0 : a[a.size() - 1 - i] - '0';
        int bInt = (i >= b.size()) ? 0 : b[b.size() - 1 - i] - '0';

        int q = aInt + bInt;
        if(upFlag) q++;

        upFlag = false;
        if(q >= 10) {
            upFlag = true;
            q -= 10;
        }

        answer = to_string(q) + answer;
    }

    if(upFlag) answer = "1" + answer;

    return answer;
}

int main(void) {

    cout << solution("582", "73") << endl; // "1316"
    // cout << solution("18446744073709551615", "287346502836570928366") << endl; // "305793246910280479981"
    // cout << solution("0", "0") << endl; // "0"


    return 0;
}
