#include "bits/stdc++.h"
using namespace std;


unordered_map<string, string> m = {
    {".-", "a"},
    {"-...", "b"},
    {"-.-.", "c"},
    {"-..", "d"},
    {".", "e"},
    {"..-.", "f"},
    {"--.", "g"},
    {"....", "h"},
    {"..", "i"},
    {".---", "j"},
    {"-.-", "k"},
    {".-..", "l"},
    {"--", "m"},
    {"-.", "n"},
    {"---", "o"},
    {".--.", "p"},
    {"--.-", "q"},
    {".-.", "r"},
    {"...", "s"},
    {"-", "t"},
    {"..-", "u"},
    {"...-", "v"},
    {".--", "w"},
    {"-..-", "x"},
    {"-.--", "y"},
    {"--..", "z"}
};

string solution(string letter) {
    string answer = "";
    vector<string> splits;

    size_t pos = 0;
    while(true){

        size_t t_pos = letter.find(' ', pos);
        if(t_pos == string::npos) {
            splits.push_back(letter.substr(pos));
            break;
        }
        splits.push_back(letter.substr(pos, t_pos - pos));
        pos = t_pos + 1;
    }

    for(auto str : splits){
        answer += m[str];
    }

    return answer;
}

int main(void) {

    cout << solution(".... . .-.. .-.. ---") << "\n"; // "hello"
    // cout << solution(".--. -.-- - .... --- -.") << "\n"; // "python"


    return 0;
}