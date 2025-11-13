#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {

    for(int i = 0; i < delete_list.size(); i++){
        auto n = find(arr.begin(), arr.end(), delete_list[i]);
        if(n != arr.end()) {
            arr.erase(n, n + 1);
        }
    }
    return arr;
}

int main(void) {

    auto res = solution({293, 1000, 395, 678, 94}, {94, 777, 104, 1000, 1, 12});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [293, 395, 678]

    res = solution({110, 66, 439, 785, 1}, {377, 823, 119, 43});
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [110, 66, 439, 785, 1]

    return 0;
}
