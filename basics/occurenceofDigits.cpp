#include <iostream>
using namespace std;

int countDigitOccurrences(int number, int digit) {
    int count = 0;

    while (number > 0) {
        int currentDigit = number % 10;
        if (currentDigit == digit) {
            count++;
        }
        number /= 10;
    }

    return count;
}

int main() {
    int number = 122333;
    int digit = 3;

    int result = countDigitOccurrences(number, digit);

    cout << "The digit " << digit << " occurs " << result << " times in " << number << "." << endl;

    return 0;
}
