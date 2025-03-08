#include <iostream>
using namespace std;

int main() {
    int num1;
    cout << "Enter a number: ";
    cin >> num1;

    cout << "Divisors of " << num1<< " are: ";
    for (int i = 1; i <= num1; i++) {
        if (num1 % i == 0) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}
