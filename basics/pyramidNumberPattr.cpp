#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Print increasing numbers
        for (int j = 0; j < i; j++)
            cout << i + j;

        // Print decreasing numbers
        for (int j = i - 2; j >= 0; j--)
            cout << i + j;

        cout << endl;
    }
    return 0;
}
