#include "bits/stdc++.h"
using namespace std;

int solution(string my_string, string is_suffix) {
    size_t lastIndex = my_string.find(is_suffix);

    while(true){
       size_t n = my_string.find(is_suffix, lastIndex + 1);
       if(n != string::npos){
        lastIndex = n;
       }
       else {
        break;
       }
    }

    if(lastIndex == -1) return 0;
    else {
        if(my_string.substr(lastIndex) == is_suffix) return 1;
        else return 0;
    }

}

int main(void) {

    cout << solution("banana", "ana") << "\n"; // 1
    cout << solution("banana", "nan") << "\n"; // 0
    cout << solution("banana", "wxyz") << "\n"; // 0
    cout << solution("banana", "abanana") << "\n"; // 0

    return 0;

}
