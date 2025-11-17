#include "bits/stdc++.h"
using namespace std;

int solution(string str1, string str2) {
    int answer = 0;

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    set<string> str1Set;
    set<string> str2Set;


    for (int i = 0; i < str1.size() - 1; i++){
        if((str1[i] >= 'a' && str1[i] <= 'z') && (str1[i + 1] >= 'a' && str1[i + 1] <= 'z')) {
            str1Set.insert(str1.substr(i, 2));
        }
    }

    for (int i = 0; i < str2.size() - 1; i++){
        if((str2[i] >= 'a' && str2[i] <= 'z') && (str2[i + 1] >= 'a' && str2[i + 1] <= 'z')) {
            str2Set.insert(str2.substr(i, 2));
        }
    }

    set<string> mergedSet;

    mergedSet.insert(str1Set.begin(), str1Set.end());
    mergedSet.insert(str2Set.begin(), str2Set.end());

    int unionSize = mergedSet.size();
    int differenceSize = str1Set.size();

    if(unionSize == 0 && differenceSize == 0) return 65536;

    for(auto t : mergedSet) cout << t << " ";
    cout << "\n";


    for(auto t : str2Set){
        str1Set.erase(t);
    }


    for(auto t : str1Set) cout << t << " ";
    cout << "\n";
    differenceSize -= str1Set.size();
    answer = ((float) differenceSize / (float) unionSize) * 65536;

    return answer;
}

int main(void) {

    // cout << solution("FRANCE", "french") << "\n"; // 16384
    // cout << solution("handshake", "shake hands") << "\n"; // 65536
    cout << solution("aa1+aa2", "AAAA12") << "\n"; // 43690
    // cout << solution("E=M*C^2", "e=m*c^2") << "\n"; // 65536


    return 1;

}