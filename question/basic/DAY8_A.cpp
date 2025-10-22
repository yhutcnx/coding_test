#include "bits/stdc++.h"
using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = (x1 || x2) && (x3 || x4);
    return answer;
}

int main(void) {

    cout << solution(false, true, true, true) << "\n"; // true
    cout << solution(true, false, false, false) << "\n"; // false

    return 0;

}
