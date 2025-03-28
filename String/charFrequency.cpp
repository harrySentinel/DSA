#include <iostream>
#include <map>
using namespace std;

void countCharacterFrequency(const string &str) {
    map<char, int> freq;
    
    // Count frequency of each character
    for (char ch : str) {
        freq[ch]++;
    }
    
    // Display the frequency of each character
    cout << "{ ";
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        cout << "'" << it->first << "': " << it->second;
        if (next(it) != freq.end()) cout << ", ";
    }
    cout << " }" << endl;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    countCharacterFrequency(input);
    return 0;
}
