#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an odd number for the cross pattern: ";
    cin >> n;

    // Ensure n is at least 3 and odd for a proper cross pattern
    if (n < 3 || n % 2 == 0) {
        cout << "Please enter an odd number greater than or equal to 3." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' for the middle row and middle column
            if (i == n / 2 || j == n / 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
