#include "bits/stdc++.h"
using namespace std;

string solution(string my_string, int n) {
    return my_string.substr(0, n);
}

int main(void) {

    cout << solution("ProgrammerS123", 11) << endl; // "ProgrammerS"
    cout << solution("He110W0r1d", 5) << endl; // "He110"

    return 0;

}
