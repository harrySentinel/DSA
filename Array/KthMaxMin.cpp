#include <iostream>
#include <vector>

using namespace std;


void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) { // Comparing adjacent elements
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); 
            }
        }
    }
}


void findKthMinMax(vector<int> &arr, int k) {
    int n = arr.size();

    if (k > n || k < 1) {
        cout << "Invalid value of K" << endl;
        return;
    }

    
    bubbleSort(arr);

    // Kth smallest element
    int kthSmallest = arr[k - 1]; // K-1 index
    // Kth largest element
    int kthLargest = arr[n - k]; // n-K index

    cout << "Kth Smallest Element: " << kthSmallest << endl;
    cout << "Kth Largest Element: " << kthLargest << endl;
}


void printArray(const vector<int> &arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {7, 10, 4, 3, 20, 15}; 
    int k = 3; // Finding the 3rd smallest and largest elements

    cout << "Original Array: ";
    printArray(arr);

    findKthMinMax(arr, k);

    return 0;
}
