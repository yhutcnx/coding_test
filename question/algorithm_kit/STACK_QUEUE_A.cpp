#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> arr)  {
    vector<int> answer;
    
    if(!arr.empty()){
        answer.push_back(arr[0]);
    }

    for(int i = 1; i < arr.size(); i++){
        int last = *(answer.end() - 1);
        if(last != arr[i]) answer.push_back(arr[i]);
    }
    return answer;
}

int main(void) {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::vector<int> res;

    res = solution({ 1, 1, 3, 3, 0, 1, 1 });
    for(auto t : res){
        cout << t << ", ";
    }
    cout << "\n"; // 1, 3, 0, 1

    res = solution({ 4, 4, 4, 3, 3 });
    for(auto t : res){
        cout << t << ", ";
    }
    cout << "\n"; // 4, 3
    
    return 0;
}