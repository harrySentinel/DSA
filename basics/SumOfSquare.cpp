#include <iostream>
using namespace std;

int sumOfSquares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10; // Extract the last digit
        sum += digit * digit; // Square it and add to sum
        num /= 10; // Remove the last digit
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Sum of squares of digits: " << sumOfSquares(number) << endl;

    return 0;
}
