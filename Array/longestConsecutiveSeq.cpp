// longest consecutive sequence 
#include <iostream>
#include <unordered_set>
using namespace std;

int longestConsecutive(int arr[], int n) {
    unordered_set<int> s(arr, arr + n);
    int longestStreak = 0;

    for (int num : s) {
        if (s.find(num - 1) == s.end()) { // Start of a sequence
            int currentNum = num;
            int currentStreak = 1;

            while (s.find(currentNum + 1) != s.end()) {
                currentNum++;
                currentStreak++;
            }

            longestStreak = max(longestStreak, currentStreak);
        }
    }
    return longestStreak;
}

int main() {
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Longest Consecutive Sequence: " << longestConsecutive(arr, n);
    return 0;
}
