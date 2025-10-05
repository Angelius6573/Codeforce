#include <iostream>

int main(){
    long long n, m, a, resultado;
    std::cin >> n >> m >> a;

    long long numV = ((n + a - 1) / a);
    long long numH = ((m + a - 1) / a);

    resultado = numV * numH;

    std::cout << resultado << "\n";
}
