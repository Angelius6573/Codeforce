#ifndef UTILS_H
#define UTILS_H

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

using i64 = long long;
using ui64 = unsigned long long;
using i32 = int;
using ui32 = unsigned int;
using f64 = double;
using f32 = float;

using str = string;
using sst = stringstream;

#define FOR(i, a, b) for(i64 i = (a) ; i < (b) ; i++)
#define REP(i, n) FOR(i, 0, n)

#define FOR32(a, b) for(i32 (a) : (b))
#define FOR64(a, b) for(i64 (a) : (b))
#define FORS(a, b) for(str (a) : (b))

//FastIO, hace que no espere datos de consola, aumenta el rendimiento
#define FastIO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

#define INF 1e18
#define MOD 1000000007

template<typename T>
T min(T a, T b) { return a < b ? a : b; }

template<typename T>
T max(T a, T b) { return a > b ? a : b; }

#endif

i32 main(){
    FastIO;
    i32 n = 0, k = 0, count = 0;
    cin >> n >> k;
    i32 a[n];

    FOR(i, 0, n){
        cin >> a[i];
    }

    i32 indiceK = a[k - 1];
    FOR(i, 0, n){
        if(a[i] >= indiceK && a[i] != 0){
            count++;
        }
    }
    cout << count << "\n";
}
