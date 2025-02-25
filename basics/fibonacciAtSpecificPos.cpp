#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int pos;
    cout << "Enter the position: ";
    cin >> pos;

    cout << "Fibonacci number at position " << pos << " is " << fibonacci(pos) << endl;
    return 0;
}
