#include <iostream>
using namespace std;

int factorial(int num) {
    int result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial: " << factorial(number) << endl;
    }
    
    return 0;
}
