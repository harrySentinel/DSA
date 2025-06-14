#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // target found
        } else if (arr[mid] < target) {
            low = mid + 1; // search right
        } else {
            high = mid - 1; // search left
        }
    }

    // Not found, 'low' is the correct insert position
    return low;
}

int main() {
    vector<int> arr = {1, 3, 5, 6};
    int target = 2;

    int index = searchInsert(arr, target);
    cout << "Target should be at index: " << index << endl;

    return 0;
}
