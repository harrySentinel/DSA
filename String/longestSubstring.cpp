#include <iostream>
#include <unordered_map>

using namespace std;

int longestSubstringWithTwoDistinct(string s) {
    unordered_map<char, int> freq;
    int left = 0, maxLength = 0;

    for (int right = 0; right < s.length(); right++) {
        freq[s[right]]++;  // Add character to frequency map

        // Shrink window if there are more than 2 distinct characters
        while (freq.size() > 2) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) {
                freq.erase(s[left]);  // Remove character from map
            }
            left++;  // Move the left pointer
        }

        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    string S = "ccaabbb";
    cout << "Longest Substring Length: " << longestSubstringWithTwoDistinct(S) << endl;
    return 0;
}
