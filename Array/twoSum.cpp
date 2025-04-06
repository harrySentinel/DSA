#include <iostream>
using namespace std;

void twoSum(int nums[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "Indices: [" << i << ", " << j << "]" << endl;
                cout << "Values: " << nums[i] << " + " << nums[j] << " = " << target << endl;
                return;
            }
        }
    }
    cout << "No two numbers add up to the target." << endl;
}

int main() {
    // Test case 1
    int nums1[] = {2, 7, 11, 15};
    int size1 = sizeof(nums1)/sizeof(nums1[0]);
    int target1 = 9;
    twoSum(nums1, size1, target1);

    // Test case 2
    int nums2[] = {3, 2, 4};
    int size2 = sizeof(nums2)/sizeof(nums2[0]);
    int target2 = 6;
    twoSum(nums2, size2, target2);

    // Test case 3
    int nums3[] = {3, 3};
    int size3 = sizeof(nums3)/sizeof(nums3[0]);
    int target3 = 6;
    twoSum(nums3, size3, target3);

        // Test case 4
        int nums4[] = {3, 3, 3};
        int size4 = sizeof(nums3)/sizeof(nums3[0]);
        int target4 = 9;
        twoSum(nums4, size4, target4);

    return 0;
}