#include "bits/stdc++.h"
using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;

    for(int i = 0; i < picture.size() * k; i++){
        string t = "";
        for(int j = 0; j < picture[i / k].size() * k; j++){
            t.push_back(picture[i / k][j / k]);
        }
        answer.push_back(t);
    }

    return answer;
}

int main(void) {

    auto res = solution({".xx...xx.", "x..x.x..x", "x...x...x", ".x.....x.", "..x...x..", "...x.x...", "....x...."}, 2);
    for(auto t : res){
        cout << t << "\n";
    }
    cout << endl; // "..xxxx......xxxx..", "..xxxx......xxxx..", "xx....xx..xx....xx", "xx....xx..xx....xx", "xx......xx......xx", "xx......xx......xx", "..xx..........xx..", "..xx..........xx..", "....xx......xx....", "....xx......xx....", "......xx..xx......", "......xx..xx......", "........xx........", "........xx........"

    res = solution({"x.x", ".x.", "x.x"}, 3);
    for(auto t : res){
        cout << t << "\n";
    }
    cout << endl; // ["xxx...xxx", "xxx...xxx", "xxx...xxx", "...xxx...", "...xxx...", "...xxx...", "xxx...xxx", "xxx...xxx", "xxx...xxx"]




    return 0;
}
