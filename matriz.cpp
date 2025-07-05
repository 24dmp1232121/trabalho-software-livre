#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> A(n, vector<int>(n));
    vector<vector<int>> B(n, vector<int>(n));

    // Ler matriz A
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    // Ler matriz B
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];

    int soma_total = 0;

    // Somar todos os elementos da matriz A
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            soma_total += A[i][j];

    // Somar todos os elementos da matriz B
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            soma_total += B[i][j];

    cout << "Soma total dos elementos das matrizes A e B: " << soma_total << endl;

    return 0;
}

