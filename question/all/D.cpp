#include "bits/stdc++.h"
using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;

    // stage, <challaged people, completed people>
    unordered_map<int, pair<int, int> > map;

    // 아예 스테이지는 존재하지만 도달한 적 없는 스테이지 선언
    for(int i = 1; i <= N; i++) map[i].first = 0;

    // 스테이지 클리어한 사람과, 도전자 설정
    for(auto stage: stages) {
        if(N >= stage) {
            map[stage].first++;
            map[stage].second++;
        }
        for(int i = 1; i < stage; i++) {
            map[i].first++;
        }
    }

    // map을 iterator하기 위해 선언..
    vector<pair<int, pair<int, int> > > failureRates = {map.begin(), map.end()};

    // 스테이지, 실패율을 담을 배열
    vector<pair<int, double> > t;

    // 스테이지 별 성공자, 도전자로 실패율 처리
    for(auto failureRate : failureRates){
        int stage = failureRate.first;
        double failRate = 0.0f;
        if(failureRate.second.first && failureRate.second.second) {
            failRate = (double)failureRate.second.second / (double)failureRate.second.first;
        }
        t.push_back({stage, failRate});
    }


    // 실패율로 1차정렬 진행, 만약 실패율이 같다면 스테이지별로 오름차순 정렬
    sort(t.begin(), t.end(), [&](pair<int, double> a, pair<int, double> b){
        if(a.second == b.second){
            return a.first < b.first;
        }
        return a.second > b.second;
    });

    // 정렬한 스테이지 출력
    for(auto m : t){
        answer.push_back(m.first);
    }

    return answer;
}

int main(void) {

    // auto res = solution(5, {1});
    // for(auto n : res){
    //     cout << n << ", ";
    // }
    // cout << "\n"; // [3, 4, 2, 1, 5]



    auto res = solution(5, {2, 1, 2, 6, 2, 4, 3, 3});
    for(auto n : res){
        cout << n << ", ";
    }
    cout << "\n"; // [3, 4, 2, 1, 5]


    res = solution(4, {4, 4, 4, 4, 4});
    for(auto n : res){
        cout << n << ", ";
    }
    cout << "\n"; // [4, 1, 2, 3]

    return 1;

}