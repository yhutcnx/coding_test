#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> numlist, int n) {

    sort(numlist.begin(), numlist.end(), [&](int a, int b) {
        if(abs(a - n) == abs(b - n)) return a > b;
        return abs(a - n) < abs(b - n); 
    });
    return numlist;
}

int main(void) {

    // auto res = solution({"up"}, {1, 1}); // {2, 1}
    // auto res = solution({1, 2, 3, 4, 5, 6}, 4); // {2, 1}
    auto res = solution({10000,20,36,47,40,6,10,7000}, 30);
    for(auto t : res){
        cout << t << ",";
    }
    cout << "\n";
    return 0;
}