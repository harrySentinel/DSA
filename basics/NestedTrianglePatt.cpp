#include <iostream>
using namespace std;

void printNestedTriangles(int n) {
    // Upper part of the pattern
    for (int i = 1; i <= n; i++) {
        int stars = 2 * i - 1;  // Number of stars in the current row
        int spaces = n - i;     // Number of leading spaces

        for (int j = 0; j < spaces; j++) cout << " ";
        for (int j = 0; j < stars; j++) cout << "*";
        cout << endl;
    }

    // Lower part of the pattern (reverse of the upper part)
    for (int i = n - 1; i >= 1; i--) {
        int stars = 2 * i - 1;
        int spaces = n - i;

        for (int j = 0; j < spaces; j++) cout << " ";
        for (int j = 0; j < stars; j++) cout << "*";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printNestedTriangles(n);
    return 0;
}
