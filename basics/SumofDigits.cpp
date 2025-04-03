#include <iostream>

using namespace std;

int sumDigitsUntilSingle(int number) {
    // Handle negative numbers by taking absolute value
    number = abs(number);
    
    while (number >= 10) {
        int sum = 0;
        int temp = number;
        
        // Sum all digits of the current number
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        
        number = sum;
    }
    
    return number;
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    int result = sumDigitsUntilSingle(number);
    
    cout << "The final single digit sum is: " << result << endl;
    
    return 0;
}