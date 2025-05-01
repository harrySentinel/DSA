#include<iostream>
#include<string>
using namespace std;

void numToWords(string num) {
    int len = num.length();

    if (len == 0) {
        cout << "String is Empty";
        return;
    }

    if (len > 4) {
        cout << "Please enter the string with supported length";
        return;
    }

    string ones[] = {"zero", "one", "two", "three", "four", "five",
                     "six", "seven", "eight", "nine"};

    string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
                      "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty",
                     "sixty", "seventy", "eighty", "ninety"};

    string powers[] = {"", "thousand", "hundred"};

    cout << num << ":\n";

    int pos = 0;

    // Handle 4-digit numbers (thousands)
    if (len == 4) {
        if (num[pos] != '0') {
            cout << ones[num[pos] - '0'] << " " << powers[1] << " ";
        }
        pos++;
        len--;
    }

    // Handle 3-digit numbers (hundreds)
    if (len == 3) {
        if (num[pos] != '0') {
            cout << ones[num[pos] - '0'] << " " << powers[2] << " ";
        }
        pos++;
        len--;
    }

    // Handle last two digits
    if (len == 2) {
        if (num[pos] == '1') {
            cout << teens[num[pos + 1] - '0'];
            return;
        } else if (num[pos] != '0') {
            cout << tens[num[pos] - '0'] << " ";
        }
        pos++;
    }

    // Handle last digit
    if (num[pos] != '0') {
        cout << ones[num[pos] - '0'];
    }
}

int main() {
    numToWords("1121");
    return 0;
}
