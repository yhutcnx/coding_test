#include "bits/stdc++.h"
using namespace std;









// vector<int> solution(int l, int r) {
//     vector<int> answer;

//     // 어차피 5의 배수임. l의 시작을 l보다 큰 5의 배수로 놓기 위해서.
//     l += 5 - (l % 5);

//     for(int i = l; i <= r; i += 5){
//         string num = to_string(i);

//         bool flag = true;
//         // 0 ~ 9까지 숫자중, 0, 5가 아닌 다른 수가 껴있으면 그 숫자는 실패
//         for(int j = '0'; j <= '9'; j++){
//             if(j == '0' || j == '5'){
//                 continue;
//             }
//             if(num.find(j) != string::npos){
//                 flag = false;
//                 break;
//             }
//         }
//         if(flag){
//             answer.push_back(i);
//         }
//     }

//     if(answer.size() == 0) answer.push_back(-1);

//     return answer;
// }



vector<int> solution(int l, int r) {
    vector<int> answer;
    int c = 1;

    while (true){
        int t = c;
        string binStr = "";

        // 규칙이 2진수와 비슷해보임. 1 -> 10 -> 11 -> 100 -> 101 -> 110
        // 2진수 방식으로 만들지만, 1 대신 5를 넣음
        while(t != 0) {
            if (t % 2 == 1) // 나머지가 1
                binStr = '5' + binStr;
            else			// 나머지가 0
                binStr = '0' + binStr;
            t /= 2; 		// X가 0이 될 때까지 2로 계속해서 나눈다.
        }

        // 만든 것을 숫자로 변경
        int m = stoi(binStr);
    
        // 끝 값을 넘어간다면 루프 탈출
        if (m > r) break;

        // 시작값보다 작지 않다면 배열에 추가
        else if(!(m < l)) answer.push_back(m);
        
        // 2진수로 만들 값에 1을 더함
        c++;
    }

    if(answer.size() == 0) answer.push_back(-1); 
    return answer;
}

int main(void) {

    vector<int> res;
    res = solution(5, 555);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << "\n"; // [5, 50, 55, 500, 505, 550, 555]

    res = solution(10, 130);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << "\n"; // [-1]


    return 0;

}
