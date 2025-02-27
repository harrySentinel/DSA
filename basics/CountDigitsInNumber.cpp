#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;
    if (num == 0) return 1; // Special case for 0
    while (num != 0) {
        num /= 10; // Remove the last digit
        count++;
    }
    return count;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = countDigits(abs(number)); // Handle negative numbers
    cout << "Number of digits: " << result << endl;

    return 0;
}

