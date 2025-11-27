#include "bits/stdc++.h"
using namespace std;


string solution(string my_string, string letter) {
    size_t pos = 0;

    while(true){

        pos = my_string.find(letter, pos);

        if(pos == string::npos){
            break;
        }

        my_string.erase(my_string.begin() + pos, my_string.begin() + pos + 1);
    }


    return my_string;
}

int main(void) {

    cout << solution("abcdef", "f") << "\n"; // "abcde"

    return 0;
}