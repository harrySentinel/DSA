#include <iostream>
using namespace std;

int main() {
    char str[100];  // Assuming max length is 100
    cout << "Enter a string: ";
    cin >> str;

    int length = 0;

    // Count characters until null terminator '\0' is found
    while (str[length] != '\0') {
        length++;
    }

    cout << "Length of the string: " << length << endl;
    return 0;
}
