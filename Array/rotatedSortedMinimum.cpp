#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[right]) {
            left = mid + 1;  // Minimum is in the right half
        } else {
            right = mid;  // Minimum is at mid or in the left half
        }
    }

    return nums[left];
}

int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    cout << "Minimum element: " << findMin(arr) << endl;  // Output: 0
    return 0;
}
