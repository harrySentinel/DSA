#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++)
            cout << " ";

        // Print characters in decreasing order
        for (int j = 0; j < (n - i); j++)
            cout << char('A' + (n - i - 1));

        cout << endl;
    }

    return 0;
}
