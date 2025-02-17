#include <iostream>
#include <vector>

using namespace std;

int searchInRotatedArray(vector<int>& arr, int target) {
    int start = 0, end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) return mid;

        // Check which half is sorted
        if (arr[start] <= arr[mid]) { // Left half is sorted
            if (arr[start] <= target && target < arr[mid])
                end = mid - 1; // Search left
            else
                start = mid + 1; // Search right
        } else { // Right half is sorted
            if (arr[mid] < target && target <= arr[end])
                start = mid + 1; // Search right
            else
                end = mid - 1; // Search left
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int index = searchInRotatedArray(arr, target);
    cout << "Index of " << target << " is: " << index << endl;
    return 0;
}
