#include <iostream>
using namespace std;

void printAlternatingPattern(int n) {
    int num = 1; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << num++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    printAlternatingPattern(n);
    return 0;
}
