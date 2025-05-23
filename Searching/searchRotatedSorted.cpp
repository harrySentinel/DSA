#include <iostream>
#include <vector>
using namespace std;

// Function to search in rotated sorted array
int search(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) return mid;
        
        // Left half is sorted
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= target && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        } 
        // Right half is sorted
        else {
            if (arr[mid] < target && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target;

    cout << "Enter target value: ";
    cin >> target;

    int index = search(arr, target);

    if (index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found in the array." << endl;

    return 0;
}
