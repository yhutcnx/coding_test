#include "bits/stdc++.h"
using namespace std;

string solution(string myString) {
    transform(myString.begin(), myString.end(), myString.begin(), [&](char c){
        if(c == 'a') return 'A'; 
        else if(c >= 'A' && c <= 'Z') {
            return (char)(c - 'A' + 'a');
        } 
        else return c;
    });
    return myString;
}


int main(void) {
    cout << solution("abstract algebra") << endl; // AbstrAct AlgebrA
    cout << solution("PrOgRaMmErS") << endl; // progrAmmers
    return 0;
}
