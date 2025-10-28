#include "bits/stdc++.h"
using namespace std;

int solution(string my_string, string is_prefix) {
    return my_string.find(is_prefix) == 0;
}

int main(void) {

    cout << solution("banana", "ban") << endl; // 1
    cout << solution("banana", "nan") << endl; // 0
    cout << solution("banana", "abcd") << endl; // 0
    cout << solution("banana", "bananan") << endl; // 0

    return 0;

}
