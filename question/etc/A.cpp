#include "bits/stdc++.h"
using namespace std;


const vector<int> dayOfMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};



vector<int> solution(int X, vector<vector<int>> H, int Y) {

    vector<int> answer(12);

    int allDay = 0;
    for(auto t : dayOfMonth) allDay += t;

    vector<int> days(allDay);


    for(int i = 0; i < days.size(); i++){
        if((i) % 7 == (7 - X - 1) || (i) % 7 == (14 - X - 1)){
            days[i] = 1;
        }
        else if ((i) % 7 == (7 - X)){
            days[i] = 1;
        }
    }

    for(auto t : H){
        int t_month = t[0];
        int t_day = t[1];

        int tt = 0;
        for(int i = 0; i < t_month - 1; i++){
            tt += dayOfMonth[i];
        }
        tt += t_day - 1;

        // 일요일 일 경우
        if((tt) % 7 == (7 - X - 1) || (tt) % 7 == (14 - X - 1)){
            while(days[tt]){
                tt--;
            }
            
        }
        else if ((tt) % 7 == (7 - X)){
            while(days[tt]){
                tt++;
            }
        }

        if(tt < 0 || tt >= allDay) continue;
        days[tt] = 1;

    }

    for(int i = 0; i < dayOfMonth.size(); i++){

        int tt = 0;
        for(int j = 0; j < i; j++){
            tt += dayOfMonth[j];
        }

        int minDay = tt;
        int maxDay = tt + dayOfMonth[i];

        // minDay <= n < maxDay

        // i+1 번째 달 월급 날.
        tt += Y - 1;

        // cout << minDay << " " << maxDay << " " << tt << "\n";


        int c = 0;
        // 예상날짜
        int ttt = tt;

        while(true){

            int minusDay = ttt - c;

            if (minusDay >= minDay){
                if(days[minusDay] == 0){
                    answer[i] = minusDay + 1;
                    break;
                }
            }

            int plusDay = ttt + c;

            if (plusDay < maxDay){
                if(days[plusDay] == 0){
                    answer[i] = plusDay + 1;
                    break;
                }
            }

            if(minusDay < minDay && plusDay >= maxDay){
                answer[i] = tt + 1;
                break;
            }

            c++;

        }
    }

    for(int i = 0; i < dayOfMonth.size(); i++){

        int tt = 0;
        for(int j = 0; j < i; j++){
            answer[i] -= dayOfMonth[j];
        }
    }

    return answer;
}


int solution3(int X, vector<vector<int>> H) {
    int answer = 0;

    int allDay = 0;
    for(auto t : dayOfMonth) allDay += t;

    vector<int> days(allDay);


    for(int i = 0; i < days.size(); i++){
        if((i) % 7 == (7 - X - 1) || (i) % 7 == (14 - X - 1)){
            days[i] = 1;
        }
        else if ((i) % 7 == (7 - X)){
            days[i] = 1;
        }
    }

    for(auto t : H){
        int t_month = t[0];
        int t_day = t[1];

        int tt = 0;
        for(int i = 0; i < t_month - 1; i++){
            tt += dayOfMonth[i];
        }
        tt += t_day - 1;

        // 일요일 일 경우
        if((tt) % 7 == (7 - X - 1) || (tt) % 7 == (14 - X - 1)){
            while(days[tt]){
                tt++;
            }
            
        }
        else if ((tt) % 7 == (7 - X)){
            while(days[tt]){
                tt--;
            }
        }

        if(tt < 0 || tt >= allDay) continue;
        days[tt] = 1;

    }


    for(int i = 0; i < days.size(); i++){
        int day = days[i];
        answer += day;
    }

    return answer;
}



int solution2(int X, vector<vector<int>> H) {
    int answer = 0;

    int allDay = 0;
    for(auto t : dayOfMonth) allDay += t;

    vector<int> days(allDay);


    for(int i = 0; i < days.size(); i++){
        if((i) % 7 == (7 - X - 1) || (i) % 7 == (14 - X - 1)){
            days[i] = 1;
        }
        else if ((i) % 7 == (7 - X)){
            days[i] = 1;
        }
    }

    for(auto t : H){
        int t_month = t[0];
        int t_day = t[1];

        int tt = 0;
        for(int i = 0; i < t_month - 1; i++){
            tt += dayOfMonth[i];
        }
        tt += t_day;

        days[tt -1 ] = 1;

    }


    for(int i = 0; i < days.size(); i++){
        int day = days[i];
        answer += day;
    }
    // cout  << "\n";

    return answer;
}

int solution1(int X) {
    int answer = 0;

    int allDay = 0;
    for(auto t : dayOfMonth) allDay += t;

    vector<int> days(allDay);


    for(int i = 0; i < days.size(); i++){
        if((i) % 7 == (7 - X - 1) || (i) % 7 == (14 - X - 1)){
            days[i] = 1;
        }
        else if ((i) % 7 == (7 - X)){
            days[i] = 1;
        }
    }

    for(auto day : days){
        answer += day;
    }

    return answer;
}


int main() {

    // cout << solution(1) << endl;
    // cout << solution(2) << endl;
    // cout << solution(3) << endl;
    // cout << solution(4) << endl;
    // cout << solution(5) << endl;
    // cout << solution(6) << endl;
    auto res = solution(7, {{1, 1}}, 28);
    // auto res = solution(7, {{1, 1}, {1, 21}, {1, 22}, {1, 23}, {3, 1}, {5, 5}, {5, 27}, {6, 6}, {8, 15}, {9, 28}, {9, 29}, {9, 30}, {10, 3}, {10, 9}, {12, 25}}, 1);

    for(auto t : res){
        cout << t << ", ";
    }
    cout << "\n";



}