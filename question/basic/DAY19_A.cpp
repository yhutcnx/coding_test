#include "bits/stdc++.h"
using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;

    for(int i = 0; i < myStr.size(); i++){
        if(myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c'){
            myStr[i] = ' ';
        }
    }

    size_t pos = 0;

    while(true){
        size_t t_pos = myStr.find(' ', pos);
        if(t_pos == string::npos){
            string t_str = myStr.substr(pos, t_pos - pos + 1);
            if(!t_str.empty())answer.push_back(t_str);

            break;
        }
        string t_str = myStr.substr(pos, t_pos - pos);
        if(!t_str.empty())answer.push_back(t_str);
        pos = t_pos + 1;
    }

    if (answer.empty()) answer.push_back("EMPTY");

    return answer;
}

int main(void) {

    auto res = solution("baconlettucetomato");
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // ["onlettu", "etom", "to"]
    // res = solution("abcd");
    // for(auto t : res){
    //     cout << t << ",";
    // }
    // cout << endl; // ["d"]
    // res = solution("cabab");
    // for(auto t : res){
    //     cout << t << ",";
    // }
    // cout << endl; // ["EMPTY"]

    return 0;
}
