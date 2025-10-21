#include "bits/stdc++.h"
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(n);
    while (n != 1){
        if(n & 1){
            n = 3 * n + 1;
        }
        else {
            n /= 2;
        }
        answer.push_back(n);
    }
    return answer;
}

int main(void) {

    vector<int> res;
    res = solution(10);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << "\n"; // [10, 5, 16, 8, 4, 2, 1]

    return 0;

}
