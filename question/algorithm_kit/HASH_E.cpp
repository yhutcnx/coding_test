#include "bits/stdc++.h"
using namespace std;


vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;

    // 첫 번째, 장르의 순위를 구하기.
    unordered_map<string, int> map;
    for(int i = 0; i < genres.size(); i++){
        map[genres[i]] += plays[i];
    }

    // 장르별 재생 횟수의 합으로 정렬 진행
    vector<pair<string, int> > vec( map.begin(), map.end() );
    sort(vec.begin(), vec.end(), [&](pair<string ,int> a, pair<string ,int> b){
        return a.second > b.second;
    });


    // 두 번째, 장르 순위에 따라서, 장르 별 재생 횟수의 순위 구하기.
    vector<vector<pair<int, int> > > g;
    for(auto genre : vec) {

        // 장르별 재생 횟수 구하기.
        vector<pair<int, int> > t;
        for(int i = 0; i < genres.size(); i++){
            if(genre.first == genres[i]){
                t.push_back({i, plays[i]});
            }
            sort(t.begin(), t.end(), [&](pair<int ,int> a, pair<int ,int> b){return a.second > b.second;});
        }
        g.push_back(t);
    }

    // 장르가 총 재생횟수로 정렬됐고, 각 장르별 곡의 재생횟수로 정렬 됨.
    // 세 번째, 장르별 상위 2곡 추출, 2곡보다 작다면 1곡 추출.
    for(auto m : g) {
        for(int i = 0; i < 2 && i < m.size(); i++){
            answer.push_back(m[i].first);
        }
    }

    return answer;
}

int main(void) {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    vector<int> res = solution({"classic", "pop", "classic", "classic", "pop"}, {500, 600, 150, 800, 2500});
    
    for(auto t : res){
        cout << t << ", ";
    }
    cout << "\n"; // [4, 1, 3, 0]

    return 0;
}