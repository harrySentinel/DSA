#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    string binary = "";
    while (num > 0) {
        binary = char('0' + (num % 2)) + binary; // Convert directly to char
        num /= 2;
    }

    cout << "Binary representation: " << binary << endl;
    return 0;
}
