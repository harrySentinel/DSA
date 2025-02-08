#include <iostream>
using namespace std;

// Function to count even and odd numbers in an array
void countEvenOdd(int arr[], int size, int &evenCount, int &oddCount) {
    evenCount = 0;
    oddCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
}

int main() {
    int arr[] = {1, 4, 7, 9, 10, 12, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int evenCount, oddCount;
    countEvenOdd(arr, size, evenCount, oddCount);

    cout << "Even count: " << evenCount << endl;
    cout << "Odd count: " << oddCount << endl;

    return 0;
}
