#include <iostream>
using namespace std;

// Function to find the longest common prefix
string longestCommonPrefix(string str1, string str2) {
    string result = "";
    int length = min(str1.length(), str2.length());

    for (int i = 0; i < length; i++) {
        if (str1[i] == str2[i]) {
            result += str1[i];
        } else {
            break;
        }
    }
    return result;
}

int main() {
    string str1 = "prefixmatch";
    string str2 = "prefixcode";

    string lcp = longestCommonPrefix(str1, str2);
    if (!lcp.empty()) {
        cout << "Longest common prefix: " << lcp << endl;
    } else {
        cout << "No common prefix found." << endl;
    }

    return 0;
}
