#include <iostream>
using namespace std;

int main() {
    int number, value, count = 0;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the value: ";
    cin >> value;

    while (number > 0) {
        int digit = number % 10; // Extract the last digit
        if (digit > value)
            count++; // Increase count if digit is greater than value
        number /= 10; // Remove last digit
    }

    cout << "Count of digits greater than " << value << " is: " << count;
    return 0;
}
