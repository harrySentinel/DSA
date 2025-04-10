#include <iostream>
using namespace std;

int stringLength(const char* str) {
    int length = 0;

    // Count characters until we hit the null terminator '\0'
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char input[] = "hello";

    int length = stringLength(input);

    cout << "Length of the string is: " << length << endl;

    return 0;
}

// alternate approach 

// #include <iostream>
// using namespace std;

// int stringLength(const char* str) {
//     const char* ptr = str;

//     // Move pointer until null character is found
//     while (*ptr != '\0') {
//         ptr++;
//     }

//     // Length is the difference between the final and initial pointer
//     return ptr - str;
// }

// int main() {
//     char input[] = "hello";

//     int length = stringLength(input);

//     cout << "Length of the string is: " << length << endl;

//     return 0;
// }
