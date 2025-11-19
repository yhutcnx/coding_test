#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> reports, int k) {
    vector<int> answer(id_list.size());

    //신고 받은 사람 : { 신고 받은사람의 아이디, 신고 한 사람 아이디 들 (중복 방지여서 Set 사용함) }
    unordered_map<string, pair<int, set<int> > > m;

    for(int i = 0; i < id_list.size(); i++){
        m[id_list[i]] = {i, {}};
    }

    // report 쌓기
    for(auto report : reports){
        size_t space = report.find(' ');
       
        string reporter = report.substr(0, space);
        string reported = report.substr(space + 1, report.size() - space - 1);
        
        m[reported].second.insert(m[reporter].first);
    }

    // 결과 추출
    for(auto t : m){
        if(t.second.second.size() < k) continue;
        for(auto tt : t.second.second){
            answer[tt]++;
        }
    }

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