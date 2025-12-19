#include "bits/stdc++.h"
using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    
    // 기본 값은 2로 설정 (모두 틀렸을 경우)
    int answer = 2;

    // 모든 dic 문자열을 순회하면서 단 하나의 문자열이라도 통과하면 통과 
    for(auto& str : dic){

        bool res = true;

        // 선택 된 dic의 요소안에, 모든 spell 요소가 포함됐는지 확인하기 위한 for문
        for(auto& spellStr : spell){
            
            // 만약 단 한번이라도 spell 요소가 포함되지 않았다고 한다면, 해당 dic 요소는 실패한 문자열
            if(str.find(spellStr) == string::npos){
                res = false;
                break;
            }
        }

        // 만약 dic 요소에서 spell의 모든 요소가 포함 됐을 경우 1반환 후 종료
        if(res) {
            answer = 1;
            break;
        }
    }

    return answer;
}

int main(void) {


    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cout << solution({"p", "o", "s"}, {"sod", "eocd", "qixm", "adio", "soo"}) << "\n"; // 2
    cout << solution({"z", "d", "x"}, {"def", "dww", "dzx", "loveaw"}) << "\n"; // 2
    cout << solution({"s", "o", "m", "d"}, {"moos", "dzx", "smm", "sunmmo", "som"}) << "\n"; // 2

    return 0;
}