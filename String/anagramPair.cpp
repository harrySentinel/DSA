#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool hasAnagramPair(const string& sentence) {
    string words[100];
    int wordCount = 0;
    string temp = "";

    for (char ch : sentence) {
        if (ch == ' ') {
            if (!temp.empty()) {
                sort(temp.begin(), temp.end());
                words[wordCount++] = temp;
                temp = "";
            }
        } else {
            temp += ch;
        }
    }
    if (!temp.empty()) {
        sort(temp.begin(), temp.end());
        words[wordCount++] = temp;
    }

    for (int i = 0; i < wordCount; i++) {
        for (int j = i + 1; j < wordCount; j++) {
            if (words[i] == words[j]) return true;
        }
    }

    return false;
}

int main() {
    cout << boolalpha << hasAnagramPair("listen silent apple") << endl; // true
    cout << boolalpha << hasAnagramPair("hello world") << endl;         // false
    return 0;
}
