#include "bits/stdc++.h"
using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";

    for(int i = c - 1; i < my_string.size(); i += m){
        answer.push_back(my_string[i]);
    }
    return answer;
}

int main(void) {

    cout << solution("ihrhbakrfpndopljhygc", 4, 2) << endl; // happy
    cout << solution("programmers", 1, 1) << endl; // programmers

    return 0;

}
