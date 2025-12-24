#include "bits/stdc++.h"
using namespace std;

int solution(int a, int b) {
    
    const int SIZE = 1005;

    int child[SIZE] = {0};
    int parent[SIZE] = {0};

    child[a] = 1;
    parent[b] = 1;

    for(int i = SIZE - 1; i >= 0; i--){
        if(child[i]){
            for(int j = 2; j <= i / 2; j++){
                if(i % j == 0){
                    while(child[i]){
                        child[j] += 1;
                        child[i / j] += 1;
                        child[i] -= 1;
                    }
                }
            }
        }
        if(parent[i]){
            for(int j = 2; j <= i / 2; j++){
                if(i % j == 0){
                    while(parent[i]){
                        parent[j] += 1;
                        parent[i / j] += 1;
                        parent[i] -= 1;
                    }

                }
            }
        }
    }

    for(int i = 0; i < SIZE; i++){
        int t = min(child[i], parent[i]);

        child[i] -= t;
        parent[i] -= t;

        if(i != 2 && i != 5){
            if(parent[i]) return 2;
        }
    }

    return 1;
}

int main(void) {

    // cout << solution(7, 31) << "\n"; // 1
    cout << solution(4, 28) << "\n"; // 1

    return 0;
}