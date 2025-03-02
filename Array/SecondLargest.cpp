#include <iostream>
using namespace std;

int main() {
    int n, largest, secondLargest;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "Array should have at least two elements." << endl;
        return 0;
    }

    int arr[100];  // Fixed-size array (Assumption: max size is 100)
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    largest = secondLargest = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -1)
        cout << "No second largest element found." << endl;
    else
        cout << "Second largest number: " << secondLargest << endl;

    return 0;
}
