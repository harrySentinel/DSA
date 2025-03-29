#include <iostream>
#include <cmath> // For log10 approach

using namespace std;

int countDigits(int number) {
    // Handle the case when the number is 0
    if (number == 0) {
        return 1;
    }
    
    // Convert negative numbers to positive
    number = abs(number);
    
    int count = 0;
    
    // Method 1: Using division by 10
    while (number > 0) {
        number /= 10;
        count++;
    }
    
    return count;
    
    /*
    // Method 2: Using logarithm (uncomment to use this approach)
    if (number == 0) return 1;
    return (int)log10(number) + 1;
    */
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    int digitCount = countDigits(number);
    
    cout << "Number of digits: " << digitCount << endl;
    
    return 0;
}