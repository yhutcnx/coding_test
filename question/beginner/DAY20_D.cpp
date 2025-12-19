#include "bits/stdc++.h"
using namespace std;

string solution(string polynomial) {
    string answer = "";

    size_t pos = 0;

    std::vector<string> splits;
    while(true){
        size_t t_pos = polynomial.find(' ', pos);
        if(t_pos == string::npos){
            splits.push_back(polynomial.substr(pos, t_pos - pos));
            break;
        }
        splits.push_back(polynomial.substr(pos, t_pos - pos));
        pos = t_pos + 1;
    }

    std::pair<int, int> p = {0, 0};

    for(int i = 0; i < splits.size(); i += 2){
        string str = splits[i];
        if(str[str.length() - 1] == 'x'){
            string t = str.substr(0, str.length() - 1);
            if (t.length() == 0){
                p.first += 1;
            }
            else {
                p.first += stoi(t);
            }
        }
        else {
            p.second += stoi(str);
        }
    }


    answer = "";
    if(p.first > 0) {
        if(p.first > 1) answer += to_string(p.first);
        answer += "x";
    }
    
    if(p.first > 0 && p.second > 0) answer += " + ";
    if(p.second > 0) {
        answer += to_string(p.second);
    }

    return answer;
}

int main(void) {

    cout << solution("1") << "\n"; // x + 5

    return 0;
}