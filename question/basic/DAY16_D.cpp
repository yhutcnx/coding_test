#include "bits/stdc++.h"
using namespace std;

string solution(string myString) {
    transform(myString.begin(), myString.end(), myString.begin(), ::tolower);

    size_t t = 0;
    t = myString.find('a', t);

    while(t != string::npos){
        myString[t] = 'A';
        t = myString.find('a', t);
    }
    return myString;
}

int main(void) {
    cout << solution("abstract algebra") << endl; // AbstrAct AlgebrA
    cout << solution("PrOgRaMmErS") << endl; // progrAmmers
    return 0;
}
