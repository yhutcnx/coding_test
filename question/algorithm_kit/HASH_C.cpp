#include "bits/stdc++.h"
using namespace std;

bool solution(vector<string> phone_book) {

    // Sort, List로 했을때는 효율성에서 문제 발생..

    // Str에서 존재하는 길이만큼만 반복하기 위해 길이 유효성 체크 배열 
    int s[30] = {0};

    // 삽입 조회가 O(1) 이기에 map 채택
    unordered_map<string, int> map;
    for(auto str : phone_book) {

        // 특정 사이즈만 반복하기 위해 진행
        s[str.size()]++;

        // 맵에 str을 등록시켜, 나중에 substr한 결과 (t) 가 map[t]에 값이 1이라면 이미 접두사라서.
        map[str]++;
    }

    for(auto str : phone_book) {        
        for(int i = 1; i <= 20; i++){

            // 문자 길이 유효성 체크 
            if(!s[i]) continue;

            // substr 유효성 체크 
            else if (str.size() <= i) continue;

            // substr 진행
            auto t = str.substr(0, i);

            // 최종적으로 substr (t)가 map에 이미 있다면 문제 발생
            if(map[t]) return false;
        }
    }
    return true;
}

int main(void) {

    // std::ios::sync_with_stdio(false);
    // std::cin.tie(nullptr);
    // std::cout.tie(nullptr);

    cout << solution({"119", "97674223", "1195524421"}) << "\n"; // false
    cout << solution({"123","456","789"}) << "\n"; // true
    cout << solution({"12","123","1235","567","88"}) << "\n"; // false


    cout << solution({"10000000", "10010", "31", "41", "51"}) << "\n";
    
    return 0;
}