#include <iostream>
using namespace std;

void printCharacterPattern(int n) {
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;  // Move to the next line
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printCharacterPattern(n);
    return 0;
}
