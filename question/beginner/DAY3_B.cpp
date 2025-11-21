#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> array) {

    sort(array.begin(), array.end());

    return array[array.size() / 2];
}

int main(void) {

    cout << solution({1, 2, 7, 10, 11}) << "\n"; // 7 

    return 0;
}