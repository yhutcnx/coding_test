#include "bits/stdc++.h"
using namespace std;

string solution(string my_string) {
    transform(my_string.begin(), my_string.end(), my_string.begin(), ::tolower);
    sort(my_string.begin(), my_string.end());

    return my_string;
}

int main(void) {

    cout << solution("Bcad") << "\n"; // "abcd"

    return 0;
}