#include <iostream>
#include <vector>
using namespace std;

void findMissingNumbers(vector<int> &arr, int n) {
    vector<bool> present(n + 1, false); // Boolean vector to track numbers

    // Mark present numbers in the array
    for (int num : arr) {
        present[num] = true;
    }

    // Print missing numbers
    cout << "Missing numbers: ";
    for (int i = 1; i <= n; i++) {
        if (!present[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the maximum number in sequence (n): ";
    cin >> n;

    int size;
    cout << "Enter the number of elements in the sequence: ";
    cin >> size;

    vector<int> arr(size); // Use vector instead of array
    cout << "Enter the sequence: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    findMissingNumbers(arr, n);

    return 0;
}
