#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    int A[100][100];

    cout << "Enter the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    bool Symmetric = true;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                Symmetric = false;
                break;
            }
        }
        if (!Symmetric) {
            break;
        }
    }

    if (Symmetric) {
        cout << "The matrix is Symmetric.\n";
    } else {
        cout << "The matrix is not Symmetric.\n";
    }

    return 0;
}

