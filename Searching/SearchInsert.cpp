#include <iostream>
#include <vector>
using namespace std;

// Function to find insert position of target in sorted array
int searchInsert(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return low; // Position to insert
}

int main() {
    vector<int> arr = {1, 3, 5, 6};
    int target;

    cout << "Enter target value: ";
    cin >> target;

    int result = searchInsert(arr, target);
    cout << "Target should be at index: " << result << endl;

    return 0;
}
