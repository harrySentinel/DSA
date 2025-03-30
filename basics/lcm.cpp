#include <iostream>
using namespace std;

// Function to calculate the Greatest Common Divisor (GCD) using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the Least Common Multiple (LCM)
int lcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0; // LCM is undefined for zero
    }
    return (a / gcd(a, b)) * b; // Using the formula: LCM(a,b) = (a*b)/GCD(a,b)
}

int main() {
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    // Calculate and display the LCM
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;
    
    return 0;
}