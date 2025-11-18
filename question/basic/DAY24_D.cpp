#include "bits/stdc++.h"
using namespace std;

string solution(string myString) {

    for(auto& c : myString){

        if(c < 'l') c = 'l';
    }
    return myString;
}

int main(void) {

    cout << solution("abcdevwxyz") << endl; // "lllllvwxyz"
    cout << solution("jjnnllkkmm") << endl; // "llnnllllmm"

    return 0;
}
