#include <iostream>
using namespace std;

void printCrossPattern(int n) {
    // Upper part of the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = i; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // Lower part of the pattern
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = i; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    printCrossPattern(n);
    return 0;
}