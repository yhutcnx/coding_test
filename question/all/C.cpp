#include "bits/stdc++.h"
using namespace std;


string submit(int n) {
    return "4S 0B";
}

int solution(int n) {

    vector<int> t;
    for(int i = 1111; i <= 9999; i += 1111){
        string t_s = submit(i);
        int SInt = i / 1000;

        for(int j = 0; j < t_s[0] - '0'; j++){
            t.push_back(SInt);
        }
    }

    for(int i = t.size(); i < 4; i++) t.push_back(0);

    sort(t.begin(), t.end(), [&](int a, int b){
        return a > b;
    });


    // 스트라이크가 무슨 숫자인지는 알아서, 그걸 조합 해야함..


    vector<int> k;

    std::function<bool(int*, int)> dfs = [&](int* m, int idx) {
        if(k.size() == 4){
            int tint = k[0] * 1000 + k[1] * 100 + k[2] * 10 + k[3];
            if (submit(tint) == "4S 0B") {
                return true;
            }
            return false;
        }
        
        for(int i = 0; i < 4; i++){
            if(m[i]) continue;
            m[i] = 1;
            k.push_back(t[i]);
            if(dfs(m, i)){
                return true;
            }
            k.pop_back();
            m[i] = 0;
        }
        return false;
    };

    for(int i = 0; i < 4; i++){
        int t_map[4] = { 0 };
        t_map[i] = 1;
        k.push_back(t[i]);
        if(dfs(t_map, i)){
            break;
        }
        k.pop_back();
        t_map[i] = 0;

    }
    
    int tint = k[0] * 1000 + k[1] * 100 + k[2] * 10 + k[3];
    return tint;
}

int main(void) {

    cout << solution({{0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1}}, {1,5,3,5,1,2,1,4}) << "\n"; // 4

    return 1;

}