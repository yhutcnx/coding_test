#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> num_list) {

    vector<int> answer = num_list;

    // 마지막 이전
    int t1 = num_list[num_list.size() - 2];

    // 마지막
    int t2 = num_list[num_list.size() - 1];

    if(t2 > t1){
        answer.push_back(t2 - t1);
    }
    else {
        answer.push_back(t2 * 2);

    }
    return answer;
}

int main(void) {

    vector<int> res;
    res = solution({2, 1, 6});
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << "\n"; // [2, 1, 6, 5]

    res = solution({5, 2, 1, 7, 5});
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << "\n"; // [5, 2, 1, 7, 5, 10]

    res = solution({5, 5});
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << "\n"; // [5, 2, 1, 7, 5, 10]
    return 0;

}
