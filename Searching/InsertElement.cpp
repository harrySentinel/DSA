#include <iostream>
#include <vector>
using namespace std;

// Position to Insert an Element in a Sorted Array

int searchInsert(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}

int main() {
    vector<int> arr = {1, 3, 5, 6};
    int target = 5;
    cout << "Insert position: " << searchInsert(arr, target) << endl;
    return 0;
}
