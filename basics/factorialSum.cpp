#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;  // Extract last digit and add to sum
        num /= 10;        // Remove last digit
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int fact = factorial(num);          // Compute factorial
    int digitSum = sumOfDigits(fact);   // Compute sum of digits

    cout << "Sum of digits of factorial: " << digitSum << endl;
    return 0;
}
