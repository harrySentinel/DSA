#include <iostream>
using namespace std;

void printStarPattern(int n) {
    // Upper half
    for (int i = 1; i <= n; i++) {
        // Printing spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Printing stars
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Printing spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Printing stars
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    printStarPattern(n);
    return 0;
}
