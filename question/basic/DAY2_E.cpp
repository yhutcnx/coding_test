#include "bits/stdc++.h"
using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    answer = my_string;
    for(int i = 0; i < overwrite_string.size(); i++) {
        answer[s + i] = overwrite_string[i];
    }
    
    return answer;
}

int main(void) {

    cout << solution("He11oWor1d", "lloWorl", 2) << "\n"; // "HelloWorld"
    cout << solution("Program29b8UYP", "merS123", 7) << "\n"; // "ProgrammerS123"
    cout << solution("ab6CDEFG", "D", 2) << "\n"; // "abDDEFG"
    cout << solution("zzzzzz", "abc", 3) << "\n"; // "zzzabc"
    cout << solution("aaaaa", "b", 1) << "\n"; // "abaaa"

    return 0;
}