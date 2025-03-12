#include <iostream>
using namespace std;

void printDiamond(int n) {
    // Upper half
    for (int i = 1; i <= n; i++) {
        // Printing spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Printing increasing numbers
        for (int j = 1; j <= i; j++)
            cout << j;

        // Printing decreasing numbers
        for (int j = i - 1; j >= 1; j--)
            cout << j;

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Printing spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Printing increasing numbers
        for (int j = 1; j <= i; j++)
            cout << j;

        // Printing decreasing numbers
        for (int j = i - 1; j >= 1; j--)
            cout << j;

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    printDiamond(n);
    return 0;
}
