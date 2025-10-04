#ifndef UTILS_H
#define UTILS_H

#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using ui64 = unsigned long long;
using i32 = int;
using ui32 = unsigned int;
using f64 = double;
using f32 = float;

using str = string;

#define FOR(i, a, b) for(i64 i = (a) ; i < (b) ; i++)
#define REP(i, n) FOR(i, 0, n)

#define FastIO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

#define INF 1e18
#define MOD 1000000007

template<typename T>
T min(T a, T b) { return a < b ? a : b; }

template<typename T>
T max(T a, T b) { return a > b ? a : b; }

#endif
