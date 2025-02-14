#include <iostream>
#include <unordered_map>

using namespace std;

int firstNonRepeatingCharacter(const string &str) {
    unordered_map<char, int> freq;
    
    // Count frequency of each character
    for (char ch : str) {
        freq[ch]++;
    }

    // Find the first character with frequency 1
    for (int i = 0; i < str.length(); i++) {
        if (freq[str[i]] == 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    string str = "swiss";
    int index = firstNonRepeatingCharacter(str);
    if (index != -1) {
        cout << "First non-repeating character: " << str[index] << " at index " << index << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }
    return 0;
}
