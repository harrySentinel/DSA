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

// alternate method 

// #include <iostream>
// using namespace std;

// int countDigitOccurrences(int number, int digit) {
//     int count = 0;

//     // Handle negative numbers
//     if (number < 0) number = -number;

//     while (number > 0) {
//         int currentDigit = number % 10;
//         if (currentDigit == digit) {
//             count++;
//         }
//         number /= 10;
//     }

//     return count;
// }

// int main() {
//     int number, digit;

//     cout << "Enter a number: ";
//     cin >> number;

//     cout << "Enter the digit to count: ";
//     cin >> digit;

//     int result = countDigitOccurrences(number, digit);

//     cout << "The digit " << digit << " occurs " << result << " times in " << number << "." << endl;

//     return 0;
// }
