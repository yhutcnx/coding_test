#include "bits/stdc++.h"
using namespace std;

// vector<string> solution(vector<string> players, vector<string> callings) {
//     vector<string> answer;

//     //순위, 앞사람, 뒷사람
//     unordered_map<string, tuple<int, string, string> > linked_map;
//     linked_map[players[0]] = {0, "", players[1]};
//     for(int i = 1; i < players.size() - 1; i++) {
//         linked_map[players[i]] = {i, players[i - 1], players[i + 1]};
//     } 
//     linked_map[players[players.size() - 1]] = {players.size() - 1, players[players.size() - 2], ""};

//     for(auto calling : callings){

//         // [kai]  3, poe, mine -> 2, soe, poe
//         // 불린 사람
//         auto t1 = linked_map[calling];

//         // 앞 사람
//         // [poe] 2, soe, kai -> 3, kai, mine
//         auto t2 = linked_map[get<1>(linked_map[calling])];

//         linked_map[calling] = {get<0>(t2), get<1>(t2), get<1>(t1)};
//         linked_map[get<2>(linked_map[calling])] = {get<0>(t1), get<2>(t2), get<2>(t1)};

//         // 기존에 나보다 뒤에있던 애 = {뒤에 있던 애의 순위, 나의 앞에 있던에, 뒤에 있던 애의 뒤에 있던 애}
//         if(get<2>(t1) != "") linked_map[get<2>(t1)] = {get<0>(linked_map[get<2>(t1)]), get<1>(t1), get<2>(linked_map[get<2>(t1)])};
        
//         // 기존에 나의 앞에 있던애의 앞에 있던 애 = 앞에 있던애의 순위, 앞에 있던 애의 앞에 있던 애, 앞에있던 애의 뒤에 있던 애
//         if(get<1>(t2) != "")linked_map[get<1>(t2)] = {get<0>(linked_map[get<1>(t2)]), get<1>(linked_map[get<1>(t2)]), calling};
        
//     }

//     vector<pair<string, tuple<int, string, string> > > v(linked_map.begin(), linked_map.end());

//     sort(v.begin(), v.end(), [&](pair<string, tuple<int, string, string> >& a, pair<string, tuple<int, string, string> >& b) {
//         return get<0>(a.second) < get<0>(b.second);
//     });

//     for(auto n : v){
//         answer.push_back(n.first);
//     }
    
//     return answer;
// }

vector<string> solution(vector<string> players, vector<string> callings) {

    vector<string> answer;

    struct Rank {
        int rank;
        string before;
        string me;
        string next;


        Rank() : rank(0), before(""), me(""), next("") {}
        Rank(int rank, string before, string me, string next)
            : rank(rank), before(before), me(me), next(next) {}
            
    };

    unordered_map<string, Rank> linked_map;

    // 순위, 앞사람, 나, 뒷사람
    linked_map[players[0]] = Rank(0, "", players[0], players[1]);
    for(int i = 1; i < players.size() - 1; i++) {
        linked_map[players[i]] = Rank(i, players[i - 1], players[i], players[i + 1]);
    } 
    linked_map[players[players.size() - 1]] = Rank(players.size() - 1, players[players.size() - 2], players[players.size() - 1], "");

    for(auto calling : callings){

        auto me = linked_map[calling];
        auto before = linked_map[linked_map[calling].before];

        linked_map[calling] = Rank(before.rank, before.before, me.me, before.me);
        linked_map[me.before] = Rank({me.rank, me.me, before.me, me.next});

        // 기존에 나보다 뒤에있던 애 = {뒤에 있던 애의 순위, 나의 앞에 있던에, 뒤에 있던 애의 뒤에 있던 애}
        if(me.next != "") linked_map[me.next] = Rank(linked_map[me.next].rank, me.before, me.next, linked_map[me.next].next);
        
        // 기존에 나의 앞에 있던애의 앞에 있던 애 = 앞에 있던애의 순위, 앞에 있던 애의 앞에 있던 애, 앞에있던 애의 뒤에 있던 애
        if(before.before != "") linked_map[before.before] = Rank( linked_map[before.before].rank, linked_map[before.before].before, before.before, me.me);
    }

    vector<pair<string, Rank> > v(linked_map.begin(), linked_map.end());

    sort(v.begin(), v.end(), [&](pair<string, Rank>& a, pair<string, Rank>& b) {
        return a.second.rank < b.second.rank;
    });

    for(auto n : v){
        answer.push_back(n.first);
    }
    return answer;

}

int main(void) {

    auto res = solution({"mumu", "soe", "poe", "kai", "mine"}, {"kai", "kai", "mine", "mine"});
    for(auto str : res){
        cout << str << ", ";
    }
    cout << "\n"; //["mumu", "kai", "mine", "soe", "poe"]


    return 1;

}