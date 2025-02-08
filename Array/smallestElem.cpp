#include <iostream>
using namespace std;

// Function to find the smallest element in an array
int findMin(int arr[], int size) {
    int minNum = arr[0]; // Assume first element is the smallest
    for (int i = 1; i < size; i++) {
        if (arr[i] < minNum) {
            minNum = arr[i];
        }
    }
    return minNum;
}

int main() {
    int arr[] = {8, 3, 5, 1, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Smallest number: " << findMin(arr, size) << endl;
    return 0;
}
