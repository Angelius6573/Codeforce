/*
https://codeforces.com/problemset/problem/50/A
A. Domino piling
 */

#include <iostream>
#include <bits/stdc++.h>
#include <iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int M, N, result = 0;

    std::cin >> M >> N;

    result = std::floor((M*N)/2);

    std::cout << result << "\n";

    return 0;
}
