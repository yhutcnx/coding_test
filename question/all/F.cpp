#include "bits/stdc++.h"
using namespace std;


vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for(int i = 0; i < n; i++){
        int num1 = arr1[i];
        int num2 = arr2[i];
        int resNum = num1 | num2;

        string resBit = "";

        while (resNum > 0){
            resBit = ((resNum % 2) ? "#" : " ") + resBit; 
            resNum = resNum / 2;
        }
        for(int j = resBit.size(); j < n; j++) {
            resBit = " " + resBit; 
        }
        answer.push_back(resBit);
    }

    return answer;
}

int main(void) {

    vector<string> res;
    
    res = solution(5, {9, 20, 28, 17, 11}, {30, 1, 21, 17, 28});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << "\n"; // ["#####","# # #", "### #", "# ##", "#####"]

    res = solution(6, {46, 33, 33 ,22, 31, 50}, {27 ,56, 19, 14, 14, 10});
    for(auto t : res){
        cout << t << ", ";
    }
    cout << "\n"; // ["######", "### #", "## ##", " #### ", " #####", "### # "]

    return 1;

}