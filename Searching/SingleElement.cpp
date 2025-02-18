#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (mid % 2 == 1) mid--;  // Ensure mid is even
        if (arr[mid] == arr[mid + 1])
            low = mid + 2;  // Move right
        else
            high = mid;  // Move left
    }
    return arr[low];
}

int main() {
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << "Single non-duplicate element: " << singleNonDuplicate(arr) << endl;
    return 0;
}
