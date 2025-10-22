#include "bits/stdc++.h"
using namespace std;

int solution(string number) {
    int answer = 0;
    for_each(number.begin(), number.end(), [&](char c){answer += (c - '0');});
    answer %= 9;
    return answer;
}

int main(void) {

    cout << solution("123") << "\n"; // 6
    cout << solution("78720646226947352489") << "\n"; // 2

    return 0;

}
