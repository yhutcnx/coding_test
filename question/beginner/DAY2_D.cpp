#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> numbers) {
    transform(numbers.begin(), numbers.end(), numbers.begin(), [&](int a){return a * 2;});
    return numbers;
}

int main(void) {
    vector<int> res;

    res = solution({1, 2, 3, 4, 5});
    
    for(auto t:res){
        cout << t << ",";
    }
    cout << "\n"; // [2, 4, 6, 8, 10]

    return 0;
}