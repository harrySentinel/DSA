#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the upper half: ";
    cin >> n;

    // Upper half including the middle row
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }

    // Lower half (mirror of upper half, excluding middle row)
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
