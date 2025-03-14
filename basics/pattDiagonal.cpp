#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        char ch = 'A' + i; // Get the character for the current row

        // Print first character of the row
        cout << ch;

        // Print spaces in between
        if (i > 0) {
            for (int j = 1; j < i; j++)
                cout << " ";
            cout << ch; // Print last character of the row
        }

        cout << endl; // Move to next line
    }

    return 0;
}
