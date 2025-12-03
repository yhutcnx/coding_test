#include "bits/stdc++.h"
using namespace std;

vector<int> solution(vector<int> numbers, string direction) {

    if(direction == "right"){
        numbers.insert(numbers.begin(), *(numbers.end() - 1));
        numbers.erase(numbers.end() - 1);
    }
    else {
        numbers.insert(numbers.end(), *(numbers.begin()));
        numbers.erase(numbers.begin());
    }
    return numbers;
}

int main(void) {

    auto res = solution({1, 2, 3}, "left"); // {3, 1, 2}

    for(auto t : res){
        cout << t << ",";
    }
    cout << "\n";
    return 0;
}