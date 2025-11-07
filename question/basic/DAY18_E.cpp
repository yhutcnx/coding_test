#include "bits/stdc++.h"
using namespace std;

string solution(string rny_string) {

    size_t pos = -1;
    while(true){
        pos = rny_string.find("m", pos + 1);

        if(pos == string::npos) break;

        rny_string.replace(rny_string.begin() + pos, rny_string.begin() + pos + 1, "rn");

    }

    return rny_string;
}

int main(void) {
    cout << solution("masterpiece") << endl; // "rnasterpiece"
    cout << solution("programmers") << endl; // "prograrnrners"
    cout << solution("jerry") << endl; // "jerry"
    cout << solution("burn") << endl; // "burn"
    return 0;
}
