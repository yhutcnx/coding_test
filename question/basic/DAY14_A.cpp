#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> num_list) {

    int even = 0;
    int odd = 0;

    for(int i = 0; i < num_list.size(); i++) {
        if(i & 1) odd += num_list[i];
        else even += num_list[i];
    }

    return (even > odd) ? even : odd;
}

int main(void) {
    cout << solution({4, 2, 6, 1, 7, 6}) << endl; // 17
    cout << solution({-1, 2, 5, 6, 3}) << endl; // 8
    return 0;
}
