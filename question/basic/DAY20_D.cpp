#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr, int n) {

    if(arr.size() & 1){

        for(int i = 0; i < arr.size(); i += 2){
            arr[i] += n;
        }

    }
    else {

        for(int i = 1; i < arr.size(); i += 2){
            arr[i] += n;
            
        }
    }



    return arr;
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
