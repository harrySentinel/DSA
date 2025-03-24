#include <iostream>
#include <vector>
using namespace std;

// Function to find the longest sequence of consecutive 1s in a binary array
int findLongestOnesSequence(const vector<int>& arr) {
    int maxCount = 0, currentCount = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            currentCount++;
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
        } else {
            currentCount = 0;
        }
    }
    return maxCount;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the binary array elements (0s and 1s only): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int longestSequence = findLongestOnesSequence(arr);
    cout << "The longest sequence of consecutive 1s is: " << longestSequence << endl;
    
    return 0;
}
