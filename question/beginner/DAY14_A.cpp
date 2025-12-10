#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;

    transform(array.begin(), array.end(), array.begin(), [&] (int num) {return num - n;});
    sort(array.begin(), array.end(), [&](int a, int b) {
        if(abs(a) == abs(b)){
            return a < b;
        }
        return abs(a) < abs(b); 
    });

    return array[0] + n;
}

int main(void) {

    cout << solution({3, 10, 28}, 20) << "\n"; // 28

    return 0;
}