#include <iostream>

using namespace std;

// Function to find intersection of two arrays
void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    // Create a copy of the second array
    int arr2Copy[size2];
    for (int i = 0; i < size2; i++) {
        arr2Copy[i] = arr2[i];
    }

    cout << "Intersection: ";
    
    // Check each element of first array
    for (int i = 0; i < size1; i++) {
        // Compare with each element of second array's copy
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2Copy[j]) {
                cout << arr1[i] << " ";
                // Mark as found by setting to a dummy value
                arr2Copy[j] = INT_MIN; 
                break;
            }
        }
    }
    cout << endl;
}

int main() {
    // Example arrays
    int arr1[] = {3, 5, 2, 2, 8};
    int arr2[] = {2, 9, 5, 2, 1};
    
    // Calculate sizes
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    
    // Find and print intersection
    findIntersection(arr1, size1, arr2, size2);
    
    return 0;
}