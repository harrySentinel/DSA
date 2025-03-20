#include <iostream>
using namespace std;

void printPattern(int n) {
    char ch = 'A'; // Start from 'A'
    for (int i = 1; i <= n; i++) { // Loop for rows
        for (int j = 1; j <= i; j++) { // Loop for columns
            cout << ch << " "; // Print the character
            ch++; // Increment character
        }
        cout << endl; // Move to the next line
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printPattern(n);
    return 0;
}
