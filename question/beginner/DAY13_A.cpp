#include "bits/stdc++.h"
using namespace std;

int solution(string s) {
    int answer = 0;


    std::function<vector<string>(string)> split = [&](string str){
        vector<string> res;

        size_t pos = 0;
        while(true){
            size_t t_pos = str.find(' ', pos);

            if(t_pos == string::npos){
                res.push_back(str.substr(pos, str.size()));
                break;
            }
            res.push_back(str.substr(pos, t_pos - pos));

            pos = t_pos + 1;
        }

        return res;
    };
 
    auto t = split(s);

    for(int i = 0; i < t.size(); i++){
        if(t[i] == "Z"){
            answer -= stoi(t[i - 1]) * 1;
            continue;
        }

        answer += stoi(t[i]);
    }


    return answer;
}

int main(void) {

    cout << solution("1 2 Z 3") << "\n"; // 4
    // cout << solution("10 20 30 40") << "\n"; // 100

    return 0;
}