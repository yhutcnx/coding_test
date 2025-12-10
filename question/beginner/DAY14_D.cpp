#include "bits/stdc++.h"
using namespace std;

string solution(string my_string) {

    for(auto &t : my_string){
        if(t >= 'a' && t <= 'z'){
            t = t - 'a' + 'A';
        }
        else {
            t = t - 'A' + 'a';
        }
    }


    return my_string;
}

int main(void) {

    cout << solution("cccCCC") << "\n"; // CCCccc

    return 0;
}