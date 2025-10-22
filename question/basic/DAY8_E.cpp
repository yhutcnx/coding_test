#include "bits/stdc++.h"
using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = my_string;

    for(vector<int> query : queries){
        int s = query[0];
        int e = query[1];
        for(int i = 0; i < round((e - s) / 2.f); i++){
            swap(answer[s + i], answer[e - i]);
        }
    }

    return answer;
}

int main(void) {
    cout << solution("rermgorpsam", {{2, 3}, {0, 7}, {5, 9}, {6, 10}}) << "\n"; // "programmers"

    return 0;

}
