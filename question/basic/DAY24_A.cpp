#include "bits/stdc++.h"
using namespace std;


enum CafeMenu {
    AMERICANO,
    CAFELATTE,
};

unordered_map<string, CafeMenu> menu = {
    {"iceamericano", AMERICANO},
    {"americanoice", AMERICANO},
    {"hotamericano", AMERICANO},
    {"americanohot", AMERICANO},
    {"icecafelatte", CAFELATTE},
    {"cafelatteice", CAFELATTE},
    {"hotcafelatte", CAFELATTE},
    {"cafelattehot", CAFELATTE},
    {"americano", AMERICANO},
    {"cafelatte", CAFELATTE},
    {"anything", AMERICANO},
};

unordered_map<CafeMenu, int> order = {
    {AMERICANO, 4500},
    {CAFELATTE, 5000},
};



int solution(vector<string> orders) {
    int answer = 0;

    for(auto ord : orders){
        answer += order[menu[ord]];
    }

    return answer;
}

int main(void) {

    cout << solution({"cafelatte", "americanoice", "hotcafelatte", "anything"}) << endl; // 19000
    cout << solution({"americanoice", "americano", "iceamericano"}) << endl; // 13500

    return 0;
}
