#include <iostream>
using namespace std;

bool isPerfectSquare(int num) {
    if (num < 0) return false; // Negative numbers can't be perfect squares

    int i = 1;
    while (i * i <= num) {
        if (i * i == num)
            return true;
        i++;
    }
    return false;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPerfectSquare(number))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
