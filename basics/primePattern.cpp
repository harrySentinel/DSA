#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to generate the prime pattern
void generatePrimePattern(int rows) {
    int count = 0, num = 2;
    for (int i = 1; i <= rows; i++) {
        int printed = 0;
        while (printed < i) {
            if (isPrime(num)) {
                cout << num << " ";
                printed++;
            }
            num++;
        }
        cout << endl;
    }
}

int main() {
    int rows = 3;
    generatePrimePattern(rows);
    return 0;
}
