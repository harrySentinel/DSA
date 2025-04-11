#include <iostream>
using namespace std;

void segregateZeroesAndOnes(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        // Move left if current element is 0
        while (arr[left] == 0 && left < right) left++;
        
        // Move right if current element is 1
        while (arr[right] == 1 && left < right) right--;

        // Swap 1 at left with 0 at right
        if (left < right) {
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
    int arr[] = {0, 1, 1, 0, 1, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    segregateZeroesAndOnes(arr, size);

    cout << "After segregation: ";
    printArray(arr, size);

    return 0;
}
