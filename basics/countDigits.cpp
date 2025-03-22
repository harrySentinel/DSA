#include <iostream>
using namespace std;

int countDigitsGreater(int number, int value) {
    int count = 0;
    while (number > 0) {
        int digit = number % 10; // Extract last digit
        if (digit > value) {
            count++;
        }
        number /= 10; // Remove last digit
    }
    return count;
}

int main() {
    int number = 54321, value = 3;
    int result = countDigitsGreater(number, value);
    cout << "Output: " << result << endl;
    return 0;
}
