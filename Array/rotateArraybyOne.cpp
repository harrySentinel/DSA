#include <iostream>
#include <vector>
using namespace std;

void rotateArray(int arr[], int n) {
    vector<int> rotatedArr(n); 

    for (int i = 0; i < n; i++) {
        rotatedArr[(i + 1) % n] = arr[i]; 
    }

    for (int i = 0; i < n; i++) {

        // Copying to original array
        arr[i] = rotatedArr[i];  
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
