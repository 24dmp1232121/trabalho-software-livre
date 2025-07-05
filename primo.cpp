#include <iostream>
using namespace std;

bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

// Função que retorna o triplo do número
int triplo(int n) {
    return 3 * n;
}

int main() {
    int n;
    cin >> n;

    cout << (ehPrimo(n) ? "Primo" : "Não é primo") << endl;
    cout << "Triplo: " << triplo(n) << endl;

    return 0;
}

