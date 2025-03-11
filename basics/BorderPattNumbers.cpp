#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the border pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print numbers on the border, else print space
            if (i == 1 || i == n || j == 1 || j == n)
                cout << j; // You can also use (cout << i) for a different pattern
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
