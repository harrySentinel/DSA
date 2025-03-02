#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100], freq[100] = {0}; // Fixed-size arrays (max 100 elements)
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++; // Increment frequency count
    }

    int mode = arr[0], maxFreq = 0;

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > maxFreq) {
            maxFreq = freq[arr[i]];
            mode = arr[i];
        }
    }

    cout << "Mode: " << mode << endl;
    return 0;
}
