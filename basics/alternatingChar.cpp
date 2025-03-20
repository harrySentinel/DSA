#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 0; i < n; i++) { // Loop for rows
        for (int j = 0; j < n; j++) { // Loop for columns
            if ((i + j) % 2 == 0) {
                cout << 'A';
            } else {
                cout << 'B';
            }
        }
        cout << endl; // Move to the next line
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    printPattern(n);
    return 0;
}
