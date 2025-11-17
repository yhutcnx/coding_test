#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> date1, vector<int> date2) {

    string date1Str = to_string(date1[0]) + ((date1[1] < 10) ? "0" : "" ) + to_string(date1[1]) + ((date1[2] < 10)?"0":"") + to_string(date1[2]);
    string date2Str = to_string(date2[0]) + ((date2[1] < 10) ? "0" : "" ) + to_string(date2[1]) + ((date2[2] < 10)?"0":"") + to_string(date2[2]);

    return date1Str < date2Str;
}

int main(void) {

    cout << solution({2021, 12, 28}, {2021, 12, 29}) << endl; // 1
    cout << solution({1024, 10, 24}, {1024, 10, 24}) << endl; // 0

    return 0;
}
