#include "bits/stdc++.h"
using namespace std;

// 시간이 아슬아슬 함...
int solution(vector<vector<string>> clothes) {
    int answer = 0;

    unordered_map<string, int> map;

    for(auto cloth : clothes){
        map[cloth[1]]++;
    }

    std::vector<int> arr;
    for(auto g : map){
        arr.push_back(g.second);
    }

    vector<int> t;

    function<void(int, int)> dfs = [&](int index, int temp){
        temp = (temp * t.back());
        answer += temp;
        for(int i = index + 1; i < arr.size(); i++){
            t.push_back(arr[i]);
            dfs(i, temp);
            t.pop_back();
        }
    };

    for(int i = 0; i < arr.size(); i++){
        t.push_back(arr[i]);
        dfs(i, 1);
        t.pop_back();
    }
    return answer;
}


// 공식.... 대박...
int solutionOtherPerson(vector<vector<string>> clothes) {
    int answer = 1;

    unordered_map <string, int> attributes;
    for(int i = 0; i < clothes.size(); i++)
        attributes[clothes[i][1]]++;
    for(auto it = attributes.begin(); it != attributes.end(); it++)
        answer *= (it->second+1);
    answer--;

    return answer;
}


int main(void) {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cout << solution({{"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}}) << endl; // 5
    cout << solution({{"crow_mask", "face"}, {"blue_sunglasses", "face"}, {"smoky_makeup", "face"}}) << endl;; // 3
    cout << solution({{"crow_mask", "face"}, {"blue_sunglasses", "face"}, {"smoky_makeup", "face"}, {"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}}) << endl;; // 3

    return 0;
}
