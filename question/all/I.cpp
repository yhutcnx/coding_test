#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    return answer;
}

int main(void) {

    vector<int> res;
    
    res = solution({"muzi", "frodo", "apeach", "neo"}, {"muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi"}, 2);
    for(auto t : res){
        cout << t << ", ";
    }
    cout << "\n"; // {2, 1, 1, 0}

    res = solution({"con", "ryan"}, {"ryan con", "ryan con", "ryan con", "ryan con"}, 3);
    for(auto t : res){
        cout << t << ", ";
    }
    cout << "\n"; // {0, 0}


    return 1;

}