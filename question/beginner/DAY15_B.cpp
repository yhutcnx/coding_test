#include "bits/stdc++.h"
using namespace std;

string solution(string my_string, int num1, int num2) {
    char t = my_string[num1];
    my_string[num1] = my_string[num2];
    my_string[num2] = t;
    
    return my_string;
}

int main(void) {

    cout << solution("hello", 1, 2) << "\n"; // "hlelo"

    return 0;
}