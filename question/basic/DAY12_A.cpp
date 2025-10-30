#include "bits/stdc++.h"
using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;

    int a = slicer[0];
    int b = slicer[1];
    int c = slicer[2];


    switch (n) {
    case 1:
        answer = { num_list.begin(), num_list.begin() + b + 1 };
        break;
    case 2:
        answer = { num_list.begin() + a, num_list.end() };
        break;
    case 3:
        answer = { num_list.begin() + a, num_list.begin() + b + 1};
        break;
    case 4:
        for(int i = a; i <= b; i += c){
            answer.push_back(num_list[i]);
        }
        break;
    }
    
    return answer;
}

int main(void) {
    
    auto res = solution(3, {1, 5, 2}, {1, 2, 3, 4, 5, 6, 7, 8, 9});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [2, 3, 4, 5, 6]

    res = solution(4, {1, 5, 2}, {1, 2, 3, 4, 5, 6, 7, 8, 9});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // [2, 4, 6]
    
    return 0;

}
