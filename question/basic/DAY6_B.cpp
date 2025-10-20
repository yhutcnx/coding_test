#include "bits/stdc++.h"
using namespace std;

int solution(int n, string control) {
    int answer = n;


    for(auto c : control){
        switch (c)
        {
        case 'w':
            answer += 1; 
            break;
        case 's':
            answer -= 1 ;
            break;
        case 'd':
            answer += 10;
            break;
        case 'a':
            answer -= 10;
            break;
        }
    }

    return answer;
}

int main(void) {
    cout << solution(0, "wsdawsdassw") << "\n"; // -1
    return 0;
}