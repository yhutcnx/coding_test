#include "bits/stdc++.h"
using namespace std;

int solution(string my_string, string target) {
    
    return my_string.find(target) != string::npos;
}

int main(void) {

    cout << solution("banana", "ana") << endl; // 1
    cout << solution("banana", "wxyz") << endl; // 0

    return 0;
}
