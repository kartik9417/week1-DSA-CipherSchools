#include <bits/stdc++.h>
using namespace std;
const int N = 4;

void rotateMatrixClockwise(int matrix[N][N]) {

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0, k = N - 1; j < k; j++, k--) {
            swap(matrix[i][j], matrix[i][k]);
        }
    }
}

void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << std::endl;
    }
}

int main() {

}

