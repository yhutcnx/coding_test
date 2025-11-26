#include "bits/stdc++.h"
using namespace std;

string solution(string my_string) {
    reverse(my_string.begin(), my_string.end());
    return my_string;
}

int main(void) {

    cout << solution("jaron") << "\n"; // "noraj"

    return 0;
}