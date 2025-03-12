#include <iostream>
using namespace std;

void printZigzagMatrix(int n) {
    int num = 1;
    for (int i = 0; i < n; i++) {
        // If row index is even, print left to right
        if (i % 2 == 0) {
            for (int j = 0; j < n + 1; j++)
                cout << num++ << " ";
        }
        // If row index is odd, print right to left
        else {
            int temp = num + n;
            for (int j = 0; j < n + 1; j++)
                cout << --temp << " ";
            num += (n + 1);
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    printZigzagMatrix(n);
    return 0;
}
