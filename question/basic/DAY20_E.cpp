#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> num_list) {
    sort(num_list.begin(), num_list.end(), [&](int a, int b) {
        return a < b;
    });

    num_list.erase(num_list.begin() + 5, num_list.end());
    return num_list;
}

int main(void) {

    auto res = solution({12, 4, 15, 46, 38, 1, 14});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [1, 4, 12, 14, 15]

    return 0;
}
