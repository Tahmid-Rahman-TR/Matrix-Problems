#include <iostream>
using namespace std;

int main() {


    int r, c;
    cout << "Enter rows and columns of the matrix:"<<endl;
    cin >> r >> c;

    int A[100][100], T[100][100];

    cout << "Enter the elements of the matrix:"<<endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> A[i][j] ;
        }
    }


    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            T[j][i] = A[i][j];
        }
    }

    cout << "Transpose of the rectangular matrix:"<<endl;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }


    int n;
    cout << "Enter size of square matrix (n x n): "<<endl;
    cin >> n;

    int S[100][100];

    cout << "Enter the elements of the square matrix:"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> S[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = S[i][j];
            S[i][j] = S[j][i];
            S[j][i] = temp;
        }
    }

    cout << "Transpose of the square matrix:"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << S[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

