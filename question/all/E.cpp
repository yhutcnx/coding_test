#include "bits/stdc++.h"
using namespace std;

#define LOGGING


vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;

    // 규칙 맵 설정
    unordered_map<string, int> termsRules;
    for(auto term : terms){
        termsRules[term.substr(0, 1)] = stoi(term.substr(2, term.size()));
    }

    int nowYear = stoi(today.substr(0, 4));
    int nowMonth = stoi(today.substr(5, 2)); 
    int nowDay = stoi(today.substr(8, 2)); 

    string nowDate = to_string(nowYear) + ((nowMonth < 10) ? "0" : "") + to_string(nowMonth) + ((nowDay < 10) ? "0" : "") + to_string(nowDay);

    for(int i = 0; i < privacies.size(); i++){
        string privacy = privacies[i];

        int privacyYear = stoi(privacy.substr(0, 4));
        int privacyMonth = stoi(privacy.substr(5, 2));
        int privacyDay = stoi(privacy.substr(8, 2));
        string privacyTerm = privacy.substr(11, 1);

        int termPeriod = termsRules[privacyTerm];

        privacyMonth += termPeriod;

        while(privacyMonth > 12){
            privacyMonth -= 12;
            privacyYear += 1;
        }

        string privacyDate = to_string(privacyYear) + ((privacyMonth < 10) ? "0" : "") + to_string(privacyMonth) + ((privacyDay < 10) ? "0" : "") + to_string(privacyDay);

        if(nowDate >= privacyDate){
            answer.push_back(i + 1);
        }
    }

    return answer;
}

int main(void) {

    vector<int> res;
    

    res = solution("2022.10.01", {"A 0"}, {"2022.09.28 A"});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << "\n"; // [1, 3]

    // res = solution("2022.05.19", {"A 6", "B 12", "C 3"}, {"2021.05.02 A", "2021.07.01 B", "2022.02.19 C", "2022.02.20 C"});
    // for(auto t : res){
    //     cout << t << ", ";
    // }
    // cout << "\n"; // [1, 3]



    // res = solution("2020.01.01", {"Z 3", "D 5"}, {"2019.01.01 D", "2019.11.15 Z", "2019.08.02 D", "2019.07.01 D", "2018.12.28 Z"});
    // for(auto t : res){
    //     cout << t << ", ";
    // }
    // cout << "\n"; // [1, 4, 5]

    return 1;

}