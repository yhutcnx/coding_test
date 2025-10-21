#include "bits/stdc++.h"
using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> answer;

    while(start_num <= end_num){
        answer.push_back(start_num);
        start_num++;
    }
    return answer;
}

int main(void) {

    vector<int> res;
    res = solution(3, 10);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << "\n"; // [3, 4, 5, 6, 7, 8, 9, 10]

    return 0;

}
