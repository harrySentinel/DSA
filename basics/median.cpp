#include <iostream>
#include <vector>
#include <algorithm> // For sort()

using namespace std;

double findMedian(vector<int>& nums) {
    // Step 1: Sort the array
    sort(nums.begin(), nums.end());
    
    int n = nums.size();
    
    // Step 2: Check if the length is even or odd
    if (n % 2 == 1) {
        // Odd length: return the middle element
        return nums[n / 2];
    } else {
        // Even length: return average of two middle elements
        return (nums[n / 2 - 1] + nums[n / 2]) / 2.0;
    }
}

int main() {
    vector<int> arr;
    int num, size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> num;
        arr.push_back(num);
    }
    
    double median = findMedian(arr);
    
    cout << "Median of the array: " << median << endl;
    
    return 0;
}