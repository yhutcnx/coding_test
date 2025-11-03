#include "bits/stdc++.h"
using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> answer;
    for(int i = 0; i < names.size(); i += 5){
        answer.push_back(names[i]);
    }
    return answer;
}

int main(void) {
    
    auto res = solution({"nami", "ahri", "jayce", "garen", "ivern", "vex", "jinx"});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // ["nami", "vex"]

    return 0;

}
