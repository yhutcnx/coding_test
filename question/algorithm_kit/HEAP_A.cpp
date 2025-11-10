#include "bits/stdc++.h"
using namespace std;


int solution(vector<int> scoville, int K) {
    int answer = 0;

    sort(scoville.begin(), scoville.end());

    auto idx = find(scoville.begin(), scoville.end(), K);
    scoville.erase(idx, scoville.end());



    for(int i = 0; i < scoville.size(); i += 1){

        cout << scoville[i] << " ";
        // int newFood = scoville[i] + (scoville[i + 1] * 2);
        // if(newFood < K) break;


    }


    return answer;
}

int main(void) {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cout << solution({1, 2, 3, 9, 10, 12}, 7) << endl; // 2

    return 0;
}