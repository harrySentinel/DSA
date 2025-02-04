#include <iostream>
#include <vector>

using namespace std;


void reverseArray(vector<int> &arr) {
    int left = 0;               
    int right = arr.size() - 1; 

    while (left < right) { 
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        // Move the pointers towards the center
        left++;
        right--;
    }
}


void printArray(const vector<int> &arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5}; 

    cout << "Original Array: ";
    printArray(arr);

    reverseArray(arr); // Reverse the array

    cout << "Reversed Array: ";
    printArray(arr);

    return 0;
}
