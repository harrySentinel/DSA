#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;  // 0 and 1 are not prime
    
    // Check for divisors from 2 to num/2
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return false;  // Found a divisor, not prime
        }
    }
    return true;  // No divisors found, it's prime
}

int main() {
    
    int start, end;
    
    cout << "Enter the starting no.: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;
    
    cout << "Prime numbers between " << start << " and " << end << " are: ";
    
    // Check each number in the range
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }
    
    cout << endl;
    return 0;
}