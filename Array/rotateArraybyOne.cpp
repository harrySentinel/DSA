#include <iostream>
using namespace std;

void rotateArray(int arr[], int n) {
    int rotatedArr[n]; // Temporary array

    for (int i = 0; i < n; i++) {
        rotatedArr[(i + 1) % n] = arr[i]; // Place element in new position
    }

    for (int i = 0; i < n; i++) {
        arr[i] = rotatedArr[i]; // Copy back to original array
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    rotateArray(arr, n);

    cout << "Rotated Array: ";
    printArray(arr, n);

    return 0;
}
