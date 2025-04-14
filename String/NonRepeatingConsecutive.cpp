#include <iostream>
#include <string>
using namespace std;

string removeConsecutiveDuplicates(const string& str) {
    if (str.empty()) return "";

    string result = "";
    result += str[0];

    for (int i = 1; i < str.length(); i++) {
        if (str[i] != str[i - 1]) {
            result += str[i];
        }
    }

    return result;
}

int main() {
    cout << removeConsecutiveDuplicates("aabbcc") << endl;       // Output: abc
    cout << removeConsecutiveDuplicates("aabbccbbaa") << endl;   // Output: abcba
    return 0;
}
