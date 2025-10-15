#include "bits/stdc++.h"
using namespace std;

string solution(string my_string, int k) {
    string answer = "";

    for(int i = 0; i < k; i++){
        answer += my_string;
    }
    return answer;
}

int main(void) {

    cout << solution("string", 3) << "\n"; // "stringstringstring"
    cout << solution("love", 10) << "\n"; // "lovelovelovelovelovelovelovelovelovelove"

    return 0;
}