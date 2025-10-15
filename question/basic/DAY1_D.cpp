#include "bits/stdc++.h"
using namespace std;

int main(void) {

    string input;
    cin >> input;

    for(int i = 0; i < input.length(); i++){
        if(input[i] >= 'a' && input[i] <= 'z') {
            input[i] = input[i] - 'a' + 'A';
        }
        else {
            input[i] = input[i] - 'A' + 'a';
        }
    }
    cout << input;

    return 0;
}