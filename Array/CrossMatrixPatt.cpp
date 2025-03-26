#include <iostream>
using namespace std;

void printCrossPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int num = min({i, j, n - 1 - i, n - 1 - j});
            cout << num;
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
