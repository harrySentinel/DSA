#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    
    int unique_ptr = 0; // Points to the last unique element
    
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[unique_ptr]) {
            unique_ptr++;
            nums[unique_ptr] = nums[i];
        }
    }
    
    return unique_ptr + 1; // Length of array without duplicates
}

int main() {
    vector<int> arr1 = {1, 1, 2};
    cout << "Original array: ";
    for (int num : arr1) cout << num << " ";
    int new_length = removeDuplicates(arr1);
    cout << "\nAfter removing duplicates: ";
    for (int i = 0; i < new_length; i++) cout << arr1[i] << " ";
    cout << "\nNew length: " << new_length << endl << endl;
    
    vector<int> arr2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << "Original array: ";
    for (int num : arr2) cout << num << " ";
    new_length = removeDuplicates(arr2);
    cout << "\nAfter removing duplicates: ";
    for (int i = 0; i < new_length; i++) cout << arr2[i] << " ";
    cout << "\nNew length: " << new_length << endl << endl;
    
    vector<int> arr3 = {1, 2, 3};
    cout << "Original array: ";
    for (int num : arr3) cout << num << " ";
    new_length = removeDuplicates(arr3);
    cout << "\nAfter removing duplicates: ";
    for (int i = 0; i < new_length; i++) cout << arr3[i] << " ";
    cout << "\nNew length: " << new_length << endl << endl;
    
    vector<int> arr4 = {1};
    cout << "Original array: ";
    for (int num : arr4) cout << num << " ";
    new_length = removeDuplicates(arr4);
    cout << "\nAfter removing duplicates: ";
    for (int i = 0; i < new_length; i++) cout << arr4[i] << " ";
    cout << "\nNew length: " << new_length << endl << endl;
    
    return 0;
}