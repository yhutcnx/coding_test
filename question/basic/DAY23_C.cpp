#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> num_list, int n) {
    
    return find(num_list.begin(), num_list.end(), n) != num_list.end();
}

int main(void) {

    cout << solution({1, 2, 3, 4, 5}, 3) << endl; // 1
    cout << solution({15, 98, 23, 2, 15}, 20) << endl; // 0

    return 0;
}
