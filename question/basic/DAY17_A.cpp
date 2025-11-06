#include "bits/stdc++.h"
using namespace std;

string solution(string myString, string pat) {


    size_t t = myString.find(pat);
    while(true){
        size_t tt = myString.find(pat, t + 1);
        if(tt == string::npos) break;
        t = tt;
    }
    myString = myString.substr(0, t + pat.size());

    return myString;
}

int main(void) {
    
    cout << solution("AbCdEFG", "dE") << endl; // AbCdE
    cout << solution("AAAAaaaa", "a") << endl; // AAAAaaaa
    return 0;

}
