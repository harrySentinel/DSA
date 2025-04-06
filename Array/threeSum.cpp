#include <iostream>
#include <algorithm> // for sort()

using namespace std;

void findThreeSum(int nums[], int size, int target = 0) {
    // Sort the array first
    sort(nums, nums + size);
    
    bool found = false;
    
    for (int i = 0; i < size - 2; i++) {
        // Skip duplicate elements for i
        if (i > 0 && nums[i] == nums[i-1]) continue;
        
        int left = i + 1;
        int right = size - 1;
        int current_target = target - nums[i];
        
        while (left < right) {
            int sum = nums[left] + nums[right];
            
            if (sum == current_target) {
                cout << "[" << nums[i] << ", " << nums[left] << ", " << nums[right] << "]" << endl;
                found = true;
                
                // Skip duplicates for left
                while (left < right && nums[left] == nums[left+1]) left++;
                // Skip duplicates for right
                while (left < right && nums[right] == nums[right-1]) right--;
                
                left++;
                right--;
            } 
            else if (sum < current_target) {
                left++;
            } 
            else {
                right--;
            }
        }
    }
    
    if (!found) {
        cout << "No triplet found that sums to " << target << endl;
    }
}

int main() {
    // Test case 1
    int nums1[] = {-1, 0, 1, 2, -1, -4};
    int size1 = sizeof(nums1)/sizeof(nums1[0]);
    cout << "Test case 1 (target = 0):" << endl;
    findThreeSum(nums1, size1);
    
    // Test case 2
    int nums2[] = {0, 0, 0, 0};
    int size2 = sizeof(nums2)/sizeof(nums2[0]);
    cout << "\nTest case 2 (target = 0):" << endl;
    findThreeSum(nums2, size2);
    
    // Test case 3
    int nums3[] = {1, 2, -2, -1};
    int size3 = sizeof(nums3)/sizeof(nums3[0]);
    cout << "\nTest case 3 (target = 0):" << endl;
    findThreeSum(nums3, size3);
    
    // Test with custom target
    int nums4[] = {1, 2, 3, 4, 5};
    int size4 = sizeof(nums4)/sizeof(nums4[0]);
    int custom_target = 8;
    cout << "\nTest case 4 (target = " << custom_target << "):" << endl;
    findThreeSum(nums4, size4, custom_target);
    
    return 0;
}