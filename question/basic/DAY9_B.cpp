#include "bits/stdc++.h"
using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";

    for(int i = 0; i < my_strings.size(); i++){
        string myString = my_strings[i];
        int part1 = parts[i][0];
        int part2 = parts[i][1];

        for(int j = part1; j <= part2; j++){
            answer.push_back(myString[j]);
        }
    }
    return answer;
}

int main(void) {

    cout << solution({"progressive", "hamburger", "hammer", "ahocorasick"}, {{0, 4}, {1, 2}, {3, 5}, {7, 7}}) << "\n"; // "programmers"

    return 0;

}
