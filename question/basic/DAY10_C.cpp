#include "bits/stdc++.h"
using namespace std;

string solution(string my_string, int s, int e) {
    string answer = my_string;

    for(int i = s; i <= round((e + s) / 2); i++){
        swap(answer[i], answer[e - (i - s)]);
    }
    return answer;
}

int main(void) {
    
    cout << solution("Progra21Sremm3", 6, 12) << endl; // "ProgrammerS123"
    cout << solution("Stanley1yelnatS", 4, 10) << endl; // "Stanley1yelnatS"

    return 0;

}
