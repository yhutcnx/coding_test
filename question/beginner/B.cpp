#include "bits/stdc++.h"
using namespace std;

int solution(int chicken) {
    int notUsed = chicken;
    int services = 0;
    while (notUsed / 10){
        services += notUsed / 10;
        notUsed = notUsed / 10 + notUsed % 10;
    }
    return services;
}

int main(void) {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cout << solution(100) << "\n"; // 2
    cout << solution(1081) << "\n"; // 2

    return 0;
}