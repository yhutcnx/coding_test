#include "bits/stdc++.h"
using namespace std;

int solution(int price) {
    int answer = price;


    switch (price / 100000) {
    case 1:
    case 2:
        answer -= price * 0.05;
        break;
    case 3:
    case 4:
        answer -= price * 0.1;
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        answer -= price * 0.2;
        break;
    }

    return answer;
}

int main(void) {

    cout << solution(1234) << "\n"; // 142000
    cout << solution(580000) << "\n"; // 484000

    return 0;
}