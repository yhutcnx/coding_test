#include "bits/stdc++.h"
using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;

    // 어차피 5의 배수임. l의 시작을 l보다 큰 5의 배수로 놓기 위해서.
    l += 5 - (l % 5);

    for(int i = l; i <= r; i += 5){
        string num = to_string(i);

        bool flag = true;
        // 0 ~ 9까지 숫자중, 0, 5가 아닌 다른 수가 껴있으면 그 숫자는 실패
        for(int j = '0'; j <= '9'; j++){
            if(j == '0' || j == '5'){
                continue;
            }
            if(num.find(j) != string::npos){
                flag = false;
                break;
            }
        }
        if(flag){
            answer.push_back(i);
        }
    }

    if(answer.size() == 0) answer.push_back(-1);

    return answer;
}

int main(void) {

    vector<int> res;
    res = solution(5, 555);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << "\n"; // [5, 50, 55, 500, 505, 550, 555]

    res = solution(10, 20);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << "\n"; // [-1]


    return 0;

}
