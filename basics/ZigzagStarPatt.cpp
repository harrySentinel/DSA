#include <iostream>
using namespace std;

void printZigzagPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print star for even rows or shifted stars for odd rows
            if ((i % 2 == 0) || (j < n - 1)) {
                if (i % 2 == 0 || j != 0) {
                    cout << "* ";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    printZigzagPattern(n);
    return 0;
}