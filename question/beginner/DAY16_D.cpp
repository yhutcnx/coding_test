#include "bits/stdc++.h"
using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;

    set<string> s = {s1.begin(), s1.end()};

    for(auto t : s2){
        s.insert(t);
    }

    answer = (s1.size() + s2.size()) - s.size();

    
    return answer;
}

int main(void) {

    cout << solution({"a", "b", "c"}, {"com", "b", "d", "p", "c"}) << "\n"; // 2

    return 0;
}