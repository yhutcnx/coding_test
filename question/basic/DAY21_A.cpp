#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> num_list) {

    sort(num_list.begin(), num_list.end());

    num_list.erase(num_list.begin(), num_list.begin() + 5);
    return num_list;
}

int main(void) {

    auto res = solution({12, 4, 15, 46, 38, 1, 14, 56, 32, 10});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [15, 32, 38, 46, 56]

    return 0;
}
