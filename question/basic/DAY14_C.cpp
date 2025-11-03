#include "bits/stdc++.h"
using namespace std;

vector<string> solution(vector<string> todo_list, vector<bool> finished) {
    vector<string> answer;
    for(int i = 0; i < todo_list.size(); i++){
        if(!finished[i]) answer.push_back(todo_list[i]);


    }
    return answer;
}

int main(void) {
    
    auto res = solution({"problemsolving", "practiceguitar", "swim", "studygraph"}, {true, false, true, false});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << endl; // ["practiceguitar", "studygraph"]

    return 0;

}
