#include "bits/stdc++.h"
using namespace std;


string solution(vector<string> arr) {
    string answer = "";
    for(int i = 0; i < arr.size(); i++){
        answer += arr[i];
    }
    return answer;
}
int main(void) {

    cout << solution({"a", "b", "c"}) << "\n"; // "abc"

    return 0;
}