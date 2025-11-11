#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;

    int arr1Size = arr1.size();
    int arr2Size = arr2.size();

    if(arr1Size == arr2Size){

        int arr1Sum = 0;
        int arr2Sum = 0;
        
        arr1Sum = accumulate(arr1.begin(), arr1.end(), 0, [&](int a, int b){return a + b;});
        arr2Sum = accumulate(arr2.begin(), arr2.end(), 0, [&](int a, int b){return a + b;});

        if(arr1Sum > arr2Sum) {
            answer = 1;
        }
        else if (arr1Sum < arr2Sum){
            answer = -1;
        }
        else {
            answer = 0;
        }

    }
    else {
        if(arr1Size > arr2Size){
            answer = 1;
        }
        else {
            answer = -1;
        }
    }


    return answer;
}

int main(void) {
    cout << solution({49, 13}, {70, 11, 2}) << endl; // -1
    cout << solution({100, 17, 84, 1}, {55, 12, 65, 36}) << endl; // 1
    cout << solution({1, 2, 3, 4, 5}, {3, 3, 3, 3, 3}) << endl; // 0
    return 0;
}
