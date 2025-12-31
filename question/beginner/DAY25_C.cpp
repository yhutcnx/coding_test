#include "bits/stdc++.h"
using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;

    int startNum = 0;
    int endNum = total;
    int t = 0;

    for(int i = endNum - num + 1; i <= endNum; i++){
        t += i;
    }

    for(int i = endNum - num; ; i--){
        if(t == total){
            startNum = i + 1;
            break;
        }
        t -= num;
    }

    for(int i = startNum; i < startNum + num; i++){
        answer.push_back(i);
    }

    return answer;
}

int main(void) {

    auto res = solution(1, 1); // {3, 4, 5}
    for(auto t : res){
        cout << t << ",";
    }
    cout << "\n";
    return 0;
}