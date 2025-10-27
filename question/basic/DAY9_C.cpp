#include "bits/stdc++.h"
using namespace std;


string solution(string my_string, int n) {
    return my_string.substr(my_string.size() - n, n);
}

int main(void) {

    cout << solution("ProgrammerS123", 11) << "\n"; // "grammerS123"
    cout << solution("He110W0r1d", 5) << "\n"; // "W0r1d"

    return 0;

}
