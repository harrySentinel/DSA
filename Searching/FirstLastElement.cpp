#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int target) {
    int left = 0, right = n - 1, first = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            first = mid;
            right = mid - 1; // Search in left half
        } else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return first;
}

int lastOccurrence(int arr[], int n, int target) {
    int left = 0, right = n - 1, last = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            last = mid;
            left = mid + 1; // Search in right half
        } else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return last;
}

int main() {
    int arr[] = {1, 2, 4, 4, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    cout << firstOccurrence(arr, n, target) << " " << lastOccurrence(arr, n, target);
    return 0;
}
