#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> sides) {

    sort(sides.begin(), sides.end(), [&](int a, int b){
        return a < b;
    });

    if(sides[0] + sides[1] > sides[2]) return 1;
    else return 2;

}

int main(void) {

    cout << solution({1, 2, 3}) << "\n"; // 2

    return 0;
}