#include <iostream>
#include <cstdlib> // Only for rand()
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Generate and display the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << rand() % 10 << " "; // Generates random numbers between 0 and 9
        }
        cout << endl;
    }

    return 0;
}
