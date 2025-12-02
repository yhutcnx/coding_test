#include "bits/stdc++.h"
using namespace std;

int solution(vector<vector<string>> relation) {
    int answer = 0;


    for(int i = 0; i < relation[0].size(); i++){
        set<string> s;

        for(int j = 0; j < relation.size(); j++){
            s.insert(relation[j][i]);
        }


        cout << s.size() << "\n\n";
        if(s.size() == relation.size()) answer++;


    }



    return answer;
}

int main(void) {

    cout << solution({{"100","ryan","music","2"},{"200","apeach","math","2"},{"300","tube","computer","3"},{"400","con","computer","4"},{"500","muzi","music","3"},{"600","apeach","music","2"}}) << "\n"; // 2

    return 1;

}