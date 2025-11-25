#include "bits/stdc++.h"
using namespace std;

vector<int> solution(int money) {
    int aaPrice = 5500;

    return {money / aaPrice, money % aaPrice};
}

int main(void) {
    vector<int> res;

    res = solution(5500);
    
    for(auto t:res){
        cout << t << ",";
    }
    cout << "\n"; // [1, 0]

    return 0;
}