#include "bits/stdc++.h"
using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    return answer;
}

int main(void) {

    auto res = solution({".xx...xx.", "x..x.x..x", "x...x...x", ".x.....x.", "..x...x..", "...x.x...", "....x...."}, 2);
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // "..xxxx......xxxx..", "..xxxx......xxxx..", "xx....xx..xx....xx", "xx....xx..xx....xx", "xx......xx......xx", "xx......xx......xx", "..xx..........xx..", "..xx..........xx..", "....xx......xx....", "....xx......xx....", "......xx..xx......", "......xx..xx......", "........xx........", "........xx........"

    res = solution({"x.x", ".x.", "x.x"}, 3);
    for(auto t : res){
        cout << t << ",";
    }
    cout << endl; // ["xxx...xxx", "xxx...xxx", "xxx...xxx", "...xxx...", "...xxx...", "...xxx...", "xxx...xxx", "xxx...xxx", "xxx...xxx"]




    return 0;
}
