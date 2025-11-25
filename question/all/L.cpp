#include "bits/stdc++.h"
using namespace std;

vector<string> solution(vector<string> record) {
    
    vector<string> answer;

    // 명령어의 순서
    queue<pair<string, string>> q;

    // 데이터베이스 -> ID to NickName
    unordered_map<string, string> m;

    for(auto rec : record){
        size_t pos1 = rec.find(' ');
        size_t pos2 = rec.find(' ', pos1 + 1);

        string type = rec.substr(0, pos1);
        string id = rec.substr(pos1 + 1, pos2 - pos1 - 1);
        string nickName = "";

        // NickName 지속적으로 업데이트 (Leave일 경우 제외)
        if(pos2 != string::npos){
            nickName = rec.substr(pos2 + 1);
            m[id] = nickName;
        }

        q.push({type, id});
    }


    // q.size()가 0이면 리턴 (명령어 모두 진행한 경우)
    for(;q.size();){

        // 명령어를 하나씩 뽑아가며 진행
        pair<string, string> t = q.front(); q.pop();

        string t_nickName = m[t.second];

        if(t.first == "Enter"){
            answer.push_back(t_nickName + "님이 들어왔습니다.");
        }
        else if (t.first == "Leave"){
            answer.push_back(t_nickName + "님이 나갔습니다.");
        }
    }


    return answer;
}

int main(void) {

    vector<string> res;
    
    res = solution({"Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan"});
    for(auto t : res){
        cout << t << ",";
    }
    cout << "\n"; // ["Prodo님이 들어왔습니다.", "Ryan님이 들어왔습니다.", "Prodo님이 나갔습니다.", "Prodo님이 들어왔습니다."]

    return 1;

}