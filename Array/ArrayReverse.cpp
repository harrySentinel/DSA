#include <iostream>
#include <vector>

using namespace std;

// Function to reverse array in-place using two-pointer technique
void reverseArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;
    
    while (start < end) {
        // Swap elements at start and end positions
        swap(arr[start], arr[end]);
        
        // Move pointers towards center
        start++;
        end--;
    }
}

int main() {
    // Test case 1: Odd number of elements
    vector<int> arr1 = {1, 2, 3, 4, 5};
    cout << "Original array 1: ";
    for (int num : arr1) cout << num << " ";
    
    reverseArray(arr1);
    cout << "\nReversed array 1: ";
    for (int num : arr1) cout << num << " ";
    cout << "\n\n";

    // Test case 2: Even number of elements
    vector<int> arr2 = {10, 20, 30, 40};
    cout << "Original array 2: ";
    for (int num : arr2) cout << num << " ";
    
    reverseArray(arr2);
    cout << "\nReversed array 2: ";
    for (int num : arr2) cout << num << " ";
    cout << "\n\n";

    // Test case 3: Single element
    vector<int> arr3 = {5};
    cout << "Original array 3: ";
    for (int num : arr3) cout << num << " ";
    
    reverseArray(arr3);
    cout << "\nReversed array 3: ";
    for (int num : arr3) cout << num << " ";
    cout << "\n\n";

    // Test case 4: Empty array
    vector<int> arr4;
    cout << "Original array 4: (empty)";
    
    reverseArray(arr4);
    cout << "\nReversed array 4: (empty)\n";

    return 0;
}