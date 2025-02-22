#include <iostream>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

bool isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;
    
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += power(digit, digits);
        temp /= 10;
    }
    
    return sum == num;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (isArmstrong(number)) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }
    
    return 0;
}
