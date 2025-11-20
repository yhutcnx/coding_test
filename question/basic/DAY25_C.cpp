#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {


    int rows = arr.size();
    int cols = arr[0].size();

    int targetSize = max(rows, cols);

    if(rows < targetSize){
        for(int i = rows; i < targetSize; i++){
            vector<int> t(targetSize);
            arr.push_back(t);
        }
    }
    else if (cols < targetSize){
        for(int i = 0; i < targetSize; i++){
            for(int j = cols; j < targetSize; j++){
                arr[i].push_back(0);
            }
        }
    }


    return arr;
}

int main(void) {

    auto res = solution({{572, 22, 37}, {287, 726, 384}, {85, 137, 292}, {487, 13, 876}});
    for(auto t1 : res){
        cout << "{";
        for(auto t2 : t1){
            cout << t2 << ", ";
        }
        cout << "}";
    }
    cout << "\n"; // {{572, 22, 37, 0}, {287, 726, 384, 0}, {85, 137, 292, 0}, {487, 13, 876, 0}}


    res = solution({{57, 192, 534, 2}, {9, 345, 192, 999}});
    for(auto t1 : res){
        cout << "{";
        for(auto t2 : t1){
            cout << t2 << ", ";
        }
        cout << "}";
    }
    cout << "\n"; // {{57, 192, 534, 2}, {9, 345, 192, 999}, {0, 0, 0, 0}, {0, 0, 0, 0}}


    res = solution({{1, 2}, {3, 4}}	);
    for(auto t1 : res){
        cout << "{";
        for(auto t2 : t1){
            cout << t2 << ", ";
        }
        cout << "}";
    }
    cout << "\n"; // {{1, 2}, {3, 4}}


    return 0;
}
