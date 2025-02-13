#include <iostream>
using namespace std;

// Function to check if str2 is a rotation of str1
bool isRotation(string str1, string str2) {
    if (str1.length() != str2.length()) return false;

    string concatenated = str1 + str1;
    return (concatenated.find(str2) != string::npos);
}

int main() {
    string str1 = "abcdef";
    string str2 = "cdefab";

    if (isRotation(str1, str2)) {
        cout << str2 << " is a rotation of " << str1 << endl;
    } else {
        cout << str2 << " is NOT a rotation of " << str1 << endl;
    }

    return 0;
}
