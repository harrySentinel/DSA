#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == mid + 1)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low + 1;
}

int main() {
    vector<int> arr = {1, 2, 3, 5, 6};
    cout << "Smallest missing number: " << missingNumber(arr) << endl;
    return 0;
}
