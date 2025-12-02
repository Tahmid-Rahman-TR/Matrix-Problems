#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int matrix[100][100];

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    bool SkewSymmetric = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != -matrix[j][i]) {
                SkewSymmetric = false;
                break;
            }
        }
        if (SkewSymmetric == false) {
            break;
        }
    }

    if (SkewSymmetric == true) {
        cout << "\nThe matrix is Skew-Symmetric.\n";
    } else {
        cout << "\nThe matrix is not Skew-Symmetric.\n";
    }

    return 0;
}

