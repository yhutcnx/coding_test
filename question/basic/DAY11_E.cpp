#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = -1;

    for(int i = idx; i < arr.size(); i++){
        if(arr[i] == 1) {
            answer = i;
            break;
        }
    }
    return answer;
}

int main(void) {
    
    cout << solution({0, 0, 0, 1}, 1) << endl; // 3
    cout << solution({1, 0, 0, 1, 0, 0}, 4) << endl; // -1
    cout << solution({1, 1, 1, 1, 0}, 3) << endl; // 3

    return 0;

}
