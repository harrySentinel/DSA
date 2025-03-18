#include <iostream>
using namespace std;

void printAlternatingPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print 'A' if the sum of row and column index is even, otherwise print 'B'
            if ((i + j) % 2 == 0)
                cout << "A";
            else
                cout << "B";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the matrix size: ";
    cin >> n;
    printAlternatingPattern(n);
    return 0;
}
