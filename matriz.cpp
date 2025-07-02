#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> A(n, vector<int>(n));
    vector<vector<int>> B(n, vector<int>(n));
    vector<vector<int>> R(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];

    char op;
    cin >> op;

    if (op == 'a') {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                R[i][j] = A[i][j] + B[i][j];
    } else if (op == 's') {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                R[i][j] = A[i][j] - B[i][j];
    } else if (op == 'm') {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                for (int k = 0; k < n; k++)
                    R[i][j] += A[i][k] * B[k][j];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << R[i][j] << " ";
        cout << endl;
    }

    return 0;
}
