#include <iostream>
#include <vector>

using namespace std;

int findPeakElement(vector<int>& arr) {
    int start = 0, end = arr.size() - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[mid + 1]) // Descending part
            end = mid;
        else // Ascending part
            start = mid + 1;
    }
    return start; // Peak index
}

int main() {
    vector<int> arr = {1, 2, 1, 3, 5, 6, 4};
    cout << "Peak Element Index: " << findPeakElement(arr) << endl;
    return 0;
}
