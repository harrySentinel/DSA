#include<iostream>
using namespace std;

int main() {
    int num, num2 = 0;

    cout << "Enter number: ";
    cin >> num;

    // Special case when num is 0
    if(num == 0) {
        cout << "Converted number is: 1" << endl;
        return 0;
    }

    int original = num; // for tracking

    // Step 1: Reversing the digits and replace 0s with 1s
    while(num > 0) {
        int rem = num % 10;
        if(rem == 0)
            rem = 1;
        num2 = num2 * 10 + rem;
        num /= 10;
    }

    // Step 2: Now reverse again to restore original digit order
    int result = 0;
    while(num2 > 0) {
        int r = num2 % 10;
        result = result * 10 + r;
        num2 /= 10;
    }

    cout << "Converted number is: " << result << endl;
    return 0;
}
