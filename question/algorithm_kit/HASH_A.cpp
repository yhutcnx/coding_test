#include "bits/stdc++.h"
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> map;
    for(string str : completion){
        map[str]++;
    }
    for(string str : participant){
        map[str]--;
        if(map[str] < 0) return str;
    }
    return answer;
}

int main(void) {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cout << solution({"leo", "kiki", "eden"}, {"eden", "kiki"}) << "\n"; // "leo"
    cout << solution({"marina", "josipa", "nikola", "vinko", "filipa"}, {"josipa", "filipa", "marina", "nikola"}) << "\n"; // "vinko"
    cout << solution({"mislav", "stanko", "mislav", "ana"}, {"stanko", "ana", "mislav"}) << "\n"; // mislav

    return 0;
}