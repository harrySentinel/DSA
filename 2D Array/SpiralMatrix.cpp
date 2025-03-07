#include <iostream>
using namespace std;

void generateSpiralMatrix(int n) {
    int matrix[n][n];
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (num <= n * n) {
        // Fill top row
        for (int i = left; i <= right; i++) matrix[top][i] = num++;
        top++;

        // Fill right column
        for (int i = top; i <= bottom; i++) matrix[i][right] = num++;
        right--;

        // Fill bottom row
        for (int i = right; i >= left; i--) matrix[bottom][i] = num++;
        bottom--;

        // Fill left column
        for (int i = bottom; i >= top; i--) matrix[i][left] = num++;
        left++;
    }

    // Print the spiral matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter matrix size: ";
    cin >> size;

    generateSpiralMatrix(size);
    return 0;
}
