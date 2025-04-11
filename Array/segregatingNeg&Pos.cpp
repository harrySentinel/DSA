#include <iostream>
using namespace std;

void segregateNegativesAndPositives(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        // If left is negative and right is positive, both are fine
        if (arr[left] < 0 && arr[right] > 0) {
            left++;
            right--;
        }
        // If both are negative, move left forward
        else if (arr[left] < 0 && arr[right] < 0) {
            left++;
        }
        // If both are positive, move right backward
        else if (arr[left] > 0 && arr[right] > 0) {
            right--;
        }
        // If left is positive and right is negative, swap them
        else {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {1, -2, 3, -4, -1, 5, -6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    segregateNegativesAndPositives(arr, size);

    cout << "After segregation: ";
    printArray(arr, size);

    return 0;
}
