#include <iostream>
using namespace std;

void printDiamondPatt(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << j;
        for (int j = i - 1; j >= 1; j--)
            cout << j;
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << j;
        for (int j = i - 1; j >= 1; j--)
            cout << j;
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the diamond pattern: ";
    cin >> n;
    printDiamondPatt(n);
    return 0;
}
