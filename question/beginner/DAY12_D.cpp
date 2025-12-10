#include "bits/stdc++.h"
using namespace std;


vector<int> solution(int n) {
    vector<int> answer;

    int history[10001] = { 0 };
    history[n]++;

    for(int i = n; i > 0; i--){
        for(int j = 2; j <= i / 2; j++){
            if (i % j == 0){
                history[i / j] += history[i];
                history[j] += history[i];
                history[i] = 0;
                break;
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        if(history[i] > 0) answer.push_back(i);
    }

     
    return answer;
}

int main(void) {

    auto res = solution(12); // { 2, 3 }

    for(auto t : res){
        cout << t << ",";
    }
    cout << "\n";
    return 0;
}