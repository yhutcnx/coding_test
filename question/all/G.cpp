#include "bits/stdc++.h"
using namespace std;

string solution(string new_id) {
    //1단계 new_id의 모든 대문자를 대응되는 소문자로 치환합니다.
    
    string one = "";
    transform(new_id.begin(), new_id.end(), new_id.begin(), ::tolower);
    
    //2단계 new_id에서 알파벳 소문자, 숫자, 빼기(-), 밑줄(_), 마침표(.)를 제외한 모든 문자를 제거합니다.
    string two = "";
    for(auto one_c : new_id){
        if((one_c >= '0' && one_c <= '9') || (one_c >= 'a' && one_c <= 'z') || one_c == '-' || one_c == '_' || one_c == '.') two.push_back(one_c);
    }

    //3단계 new_id에서 마침표(.)가 2번 이상 연속된 부분을 하나의 마침표(.)로 치환합니다.

    size_t pos = 0;
    while(true){
        pos = two.find("..");
        if(pos == string::npos) break;
        two.erase(two.begin() + pos, two.begin() + pos + 1);
    }

    //4단계 new_id에서 마침표(.)가 처음이나 끝에 위치한다면 제거합니다.
    
    if(two[0] == '.') two.erase(two.begin(), two.begin() + 1);
    if(two[two.size() - 1] == '.') two.erase(two.end() - 1, two.end());

    //5단계 new_id가 빈 문자열이라면, new_id에 "a"를 대입합니다.
    if(two.empty()) two = "a";

    //6단계 new_id의 길이가 16자 이상이면, new_id의 첫 15개의 문자를 제외한 나머지 문자들을 모두 제거합니다.
    //    만약 제거 후 마침표(.)가 new_id의 끝에 위치한다면 끝에 위치한 마침표(.) 문자를 제거합니다.

    if(two.size() >= 16) two.erase(two.begin() + 15, two.end());
    if(two[two.size() - 1] == '.') two.erase(two.end() - 1, two.end());

    //7단계 new_id의 길이가 2자 이하라면, new_id의 마지막 문자를 new_id의 길이가 3이 될 때까지 반복해서 끝에 붙입니다.
    
    for(int i = two.size(); i <= 2; i++){
        two.push_back(two[two.size() - 1]);
    }

    return two;
}

int main(void) {

    // cout << solution("...!@BaT#*..y.abcdefghijklm") << "\n"; // "bat.y.abcdefghi"
    // cout << solution("z-+.^.") << "\n"; // "z--"
    // cout << solution("=.=") << "\n"; // "aaa"
    // cout << solution("123_.def") << "\n"; // "123_.def"
    cout << solution("abcdefghijklmn.p") << "\n"; // "abcdefghijklmn"

    return 1;

}