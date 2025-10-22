#include "bits/stdc++.h"
using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    for_each(index_list.begin(), index_list.end(), [&](int index){answer.push_back(my_string[index]);});
    return answer;
}

int main(void) {

    cout << solution("cvsgiorszzzmrpaqpe", {16, 6, 5, 3, 12, 14, 11, 11, 17, 12, 7}) << "\n"; // programmers
    cout << solution("zpiaz", {1, 2, 0, 0, 3}) << "\n"; // programmers

    return 0;

}
