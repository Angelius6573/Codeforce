/*
 https://codeforces.com/problemset/problem/1433/A
A. Boring Apartments
 */

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

    vector<str> limite;

    FOR(i, 0, casos){
        str valor;
        cin >> valor;
        limite.push_back(valor);
    }

    FOR(i, 0, casos){
        i32 uno = 0, dos = 0, tres = 0, cuatro = 0, iteracion = 0;
        str inicial = "1", aux = "0";
        str valorInM = limite[i];
        char primer = valorInM[0];

        str limit = valorInM + primer;

        while(inicial != limit){
           // REP(i, 4){
                switch(inicial.length()){
                    case 1: uno++;
                            aux = inicial;
                            inicial += inicial;
                            break;
                    case 2: dos++;
                            inicial += aux;
                            break;
                    case 3: tres++;
                            inicial += aux;
                            break;
                    case 4: cuatro++;
                            iteracion++;
                            if(inicial != "9999"){
                                inicial = to_string(1+iteracion);
                            } else {
                                inicial = "99999";
                            }
                            break;
                    default: cout << "waos";
                }
            //}
        }
        i32 resultado = (4*cuatro) + (3*tres) + (2*dos) + (1*uno);
        cout << resultado << "\n";        
    }

    return 0; 
}
