#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    for (int i = 0; i < n; i++) {  // Loop for rows
        for (int j = 0; j < n; j++) {  // Loop for columns
            cout << ((i + j) % 2);  // Alternating 0s and 1s
        }
        cout << endl;
    }

    return 0;
}
