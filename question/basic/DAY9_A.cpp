#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;

    for(auto intStr : intStrs){
        int splitInt = stoi(intStr.substr(s, l));

        if(splitInt > k){
            answer.push_back(splitInt);
        }
    }

    return answer;
}

int main(void) {

    auto res = solution({"0123456789","9876543210","9999999999999"}, 50000, 5, 5);
    for(auto a: res){
        cout << a << ", ";
    }
    cout << "\n"; // [56789, 99999]

    return 0;

}
