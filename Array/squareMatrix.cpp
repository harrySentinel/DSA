#include <iostream>
using namespace std;

void generateMatrix(int size) {
    int matrix[size][size];
    int num = 1;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = num++;
        }
    }
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the square matrix: ";
    cin >> size;
    
    generateMatrix(size);
    
    return 0;
}
