#include "bits/stdc++.h"
using namespace std;

string solution(int age) {
    string answer = to_string(age);

    for(auto & c : answer) c = c - '0' + 'a';


    return answer;
}

int main(void) {

    cout << solution(23) << "\n"; // "cd"

    return 0;
}