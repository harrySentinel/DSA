#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, temp;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while (temp > 0) {
          rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if (num == rev)
        cout << "Palindrome Number" << endl;
    else
        cout << "Not a Palindrome" << endl;

    return 0;
}
