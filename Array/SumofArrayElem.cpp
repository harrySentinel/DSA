#include <iostream>
using namespace std;

// Function to calculate the sum of array elements
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {4, 2, 7, 1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of array elements: " << sumArray(arr, size) << endl;
    return 0;
}
