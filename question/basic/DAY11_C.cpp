#include "bits/stdc++.h"
using namespace std;

string solution(string my_string, vector<int> indices) {
    sort(indices.begin(), indices.end(), [&](int a, int b){return a > b;});
    for(auto indice : indices) {
        my_string.erase(indice, 1);
    }
    return my_string;
}

int main(void) {
    cout << solution("apporoograpemmemprs", {1, 16, 6, 15, 0, 10, 11, 3}) << endl; // "programmers"
    return 0;
}
