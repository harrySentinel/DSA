#include <iostream>
using namespace std;

void fibonacci(int limit) {
    int a = 0, b = 1, next;
    cout << "Fibonacci Series: " << a;
    if (limit >= 1) {
        cout << ", " << b;
    }
    next = a + b;
    while (next <= limit) {
        cout << ", " << next;
        a = b;
        b = next;
        next = a + b;
    }
    cout << endl;
}

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;
    fibonacci(limit);
    return 0;
}
