#include "bits/stdc++.h"
using namespace std;

string solution(string myString) {
    transform(myString.begin(), myString.end(), myString.begin(), ::toupper);
    return myString;
}

int main(void) {
    cout << solution("aBcDeFg") << endl; // ABCDEFG
    cout << solution("AAA") << endl; // AAA
    return 0;
}
