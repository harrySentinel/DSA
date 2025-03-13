#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    char ch = 'A'; // Starting character

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int space = 0; space < n - i - 1; space++)
            cout << " ";

        // Print increasing characters
        for (int j = 0; j < (2 * i + 1); j++)
            cout << ch++;

        cout << endl;
    }

    return 0;
}
