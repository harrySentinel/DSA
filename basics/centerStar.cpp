#include <iostream>
using namespace std;

void printStarPattern(int n) {
    for (int i = 1; i <= n; i++) {
        int stars = 2 * i - 1;  // Number of stars in the current row
        int spaces = n - i;     // Number of leading spaces

        // Print leading spaces
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printStarPattern(n);
    return 0;
}
