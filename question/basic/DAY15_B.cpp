#include "bits/stdc++.h"
using namespace std;

int solution(vector<int> arr) {
    int answer = 0;


    for(int i = 0; i < arr.size(); i++){
        int cnt = 0;
        while(true){
            if(arr[i] & 1 && arr[i] < 50) arr[i] = arr[i] * 2 + 1;
            else if (!(arr[i] & 1) && arr[i] >= 50) arr[i] = arr[i] >> 1;
            else break;
            cnt++;
        }

        answer = max(cnt, answer);
    }

    return answer;
}

int main(void) {
    cout << solution({1, 2, 3, 100, 99, 98}) << endl; // 5
    return 0;
}
