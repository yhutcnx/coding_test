#include "bits/stdc++.h"
using namespace std;

// 선물을 받는 조건.
// 1. 선물을 교환한 경우
// 1.1. A가 B보다 더 선물을 많이 준 경우 A가 선물 하나 받음.
// 2. 선물을 교환하지 않은 경우
// 2.1. A가 B보다 선물지수가 높은경우 A가 선물 하나 받음.

int solution(vector<string> friends, vector<string> gifts) {

    struct KakaoFriend {
        string name = "";
        int giftCoeff = 0;
        unordered_map<string, int> recieveGift;
        unordered_map<string, int> sentGift;

        int nextRecieveGiftCount = 0;

        KakaoFriend() : name(""), giftCoeff(0), recieveGift({}), sentGift({}), nextRecieveGiftCount(0){}
        KakaoFriend(string name, int giftCoeff, unordered_map<string, int> recieveGift, unordered_map<string, int> sentGift) : name(name), giftCoeff(giftCoeff), recieveGift(recieveGift), sentGift(sentGift), nextRecieveGiftCount(0) {}
    };

    int answer = 0;

    unordered_map<string, KakaoFriend> m;
    for(auto t_friend : friends){
        m[t_friend] = KakaoFriend(t_friend, 0, {}, {});
    }

    for(auto t_gift : gifts){
        size_t pos = t_gift.find(' ');

        string sentFnd = t_gift.substr(0, pos);
        string recieveFnd = t_gift.substr(pos + 1, t_gift.size());

        // 보낸사람의 보낸 선물 카운팅 +1
        m[sentFnd].sentGift[recieveFnd]++;

        // 받은사람의 받은 선물 카운팅 +1
        m[recieveFnd].recieveGift[sentFnd]++;

        // 보낸사람의 선물지수 +1
        m[sentFnd].giftCoeff++;

        // 받은사람의 선물지수 -1
        m[recieveFnd].giftCoeff--;

    }

    // 보낸 사람 체크
    for(int i = 0; i < friends.size(); i++){
        // 받은 사람 체크
        for(int j = 0; j < friends.size(); j++){
        
            // 보낸 사람과 받는 사람이 동일하다면 넘어가기
            if(i == j) continue;

            string sentFnd = friends[i];
            string recieveFnd = friends[j];

            // 1. 개수로 비교하기
            int sentCount = m[sentFnd].sentGift[recieveFnd];
            int recieveCount = m[sentFnd].recieveGift[recieveFnd];
    
            if(sentCount != recieveCount){
                if(sentCount > recieveCount) {
                    m[sentFnd].nextRecieveGiftCount++;
                }
            }
            // 2. 같거나 둘다 없다면,
            else {
                int sentCoeff = m[sentFnd].giftCoeff;
                int recieveCoeff = m[recieveFnd].giftCoeff;
                if(sentCoeff > recieveCoeff) {
                    m[sentFnd].nextRecieveGiftCount++;
                }
            }
        }
    }

    vector<pair<string, KakaoFriend> > v = {m.begin(), m.end()};

    sort(v.begin(), v.end(), [&](pair<string, KakaoFriend>& a, pair<string, KakaoFriend>& b){
        return a.second.nextRecieveGiftCount > b.second.nextRecieveGiftCount;
    });

    answer = v[0].second.nextRecieveGiftCount;

    return answer;
}

int main(void) {

    cout << solution({"muzi", "ryan", "frodo", "neo"}, {"muzi frodo", "muzi frodo", "ryan muzi", "ryan muzi", "ryan muzi", "frodo muzi", "frodo ryan", "neo muzi"}) << "\n"; // 2
    cout << solution({"joy", "brad", "alessandro", "conan", "david"}, {"alessandro brad", "alessandro joy", "alessandro conan", "david alessandro", "alessandro david"}) << "\n"; // 4
    cout << solution({"a", "b", "c"}, {"a b", "b a", "c a", "a c", "a c", "c a"}) << "\n"; // 0

    return 1;

}