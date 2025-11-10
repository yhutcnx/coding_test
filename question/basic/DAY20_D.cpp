#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    return answer;
}

int main(void) {

    auto res = solution({49, 12, 100, 276, 33}, 27);
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [76, 12, 127, 276, 60]

    res = solution({444, 555, 666, 777}, 100);
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // [444, 655, 666, 877]


    return 0;
}
