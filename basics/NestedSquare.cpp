#include <iostream>
using namespace std;

void printNestedSquares(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' at the borders of the square
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;  // Move to the next line
    }
}

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;
    printNestedSquares(n);
    return 0;
}
