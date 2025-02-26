#include <iostream>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    while (exp--) result *= base;
    return result;
}

int main() {
    int num, originalNum, remainder, sum = 0, digits = 0;
    
    cout << "Enter a number: ";
    cin >> num;
    
    originalNum = num;
    
    // Count the number of digits
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits raised to the power of number of digits
    temp = num;
    while (temp > 0) {
        remainder = temp % 10;  // Extract last digit
        sum += power(remainder, digits); // Raise to power and add
        temp /= 10;  // Remove last digit
    }

    // Check if it is a Narcissistic Number
    if (sum == originalNum)
        cout << "Narcissistic Number" << endl;
    else
        cout << "Not a Narcissistic Number" << endl;

    return 0;
}
