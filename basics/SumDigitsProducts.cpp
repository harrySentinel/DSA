#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;  // Extract last digit and add to sum
        num /= 10;        // Remove last digit
    }
    return sum;
}

int main() {
    int number1, number2;
    
    // Taking input from user
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    
    // Calculate the product
    int product = number1 * number2;
    
    // Calculate the sum of digits of the product
    int result = sumOfDigits(product);
    
    // Output the result
    cout << "Sum of digits of the product: " << result << endl;
    
    return 0;
}
