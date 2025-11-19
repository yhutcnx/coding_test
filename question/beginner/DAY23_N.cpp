#include "bits/stdc++.h"
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;


    vector<string> sentences = {"aya", "ye", "woo", "ma"};

    for(auto str : babbling){
        size_t idx = 0;
        for(auto sentence : sentences){
            idx = str.find(sentence);
            if(idx != string::npos) str.replace(str.begin() + idx, str.begin() + idx + sentence.length(), "-");
        }
        size_t t = count(str.begin(), str.end(), '-');
        if(t == str.size()) answer++;
    }

    return answer;
}

int main(void) {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cout << solution({"yemawoo"}) << "\n"; // 5
    cout << solution({"aya", "yee", "u", "maa", "wyeoo"}) << "\n"; // 5
    cout << solution({"ayaye", "uuuma", "ye", "yemawoo", "ayaa"}) << "\n"; // 16

    return 0;
}