#include <iostream>
using namespace std;

bool isPalindrome(string str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string or number: ";
    cin >> input;
    
    if (isPalindrome(input)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }
    
    return 0;
}
