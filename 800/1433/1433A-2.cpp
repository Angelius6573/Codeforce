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

    i32 casos = 0;
    cin >> casos;

    vector<i32> limite;

    FOR(i, 0, casos){
        i32 valor;
        cin >> valor;

        vector<i32> vec(4, 0);
        
        for(i32 i = 3; i >= 0 && valor > 0 ; --i){
            vec[i] = valor % 10;
            valor /= 10;
        }

        i32 res = vec[3] - 1;

        i32 uno = vec[0];
        i32 dos = vec[1];
        i32 tre = vec[2];
        i32 cua = vec[3];

        if(tre == 0){
            uno = res;
            dos = res;
            tre = res;
        }
        if(dos == 0){
            uno = res;
            dos = res;
        }
        if(uno == 0){
            uno = res;
        }

        i32 resultado = (uno*4)+(dos*3)+(tre*2)+(cua*1);

        limite.push_back(resultado);
    }

    REP(i, casos){
        cout << limite[i] << "\n";
    }
}
