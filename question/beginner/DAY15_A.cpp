#include "bits/stdc++.h"
using namespace std;

vector<pair<string, string> > lut = {
    {"zero", "0"},
    {"one", "1"},
    {"two", "2"},
    {"three", "3"},
    {"four", "4"},
    {"five", "5"},
    {"six", "6"},
    {"seven", "7"},
    {"eight", "8"},
    {"nine", "9"},
};

long long solution(string numbers) {
    long long answer = 0;

    for(int i = 0; i < lut.size(); i++){

        string str = lut[i].first;
        string target = lut[i].second;

        while(true) {
            size_t pos = numbers.find(str);
            if(pos == string::npos){
                break;
            }

            numbers.replace(numbers.begin() + pos, numbers.begin() + pos + str.size(), target);
        }
    }

    answer = stoll(numbers);

    return answer;
}

int main(void) {

    // cout << solution("onetwothreefourfivesixseveneightnine") << "\n"; // 123456789
    cout << solution("onefourzerosixseven") << "\n"; // 14067

    return 0;
}