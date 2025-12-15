#include "bits/stdc++.h"
using namespace std;

int solution(string my_string) {
    int answer = 0;

    vector<string> v;
    size_t pos = 0;

    while(true){

        size_t t_pos = my_string.find(' ', pos);
        if(t_pos == string::npos){
            v.push_back(my_string.substr(pos, t_pos - pos));
            break;
        }
        v.push_back(my_string.substr(pos, t_pos - pos));
        pos = t_pos + 1;
    }

    answer += stoi(v[0]);

    for(int i = 2; i < v.size(); i += 2){
        string vv = v[i];

        if(v[i - 1] == "+"){
            answer += stoi(v[i]);

        }
        else {
            answer -= stoi(v[i]);
        }
    }

    return answer;
}

int main(void) {

    cout << solution("13 + 34") << "\n"; // 7

    return 0;
}