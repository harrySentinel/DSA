#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProduct(const vector<int>& arr) {
    if (arr.size() < 2) {
        cout << "Array must contain at least two elements." << endl;
        return 0;
    }

    // Initialize the two largest and two smallest elements
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int num : arr) {
        // Find top 2 max values
        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max2 = num;
        }

        // Find bottom 2 min values (could be negative)
        if (num < min1) {
            min2 = min1;
            min1 = num;
        } else if (num < min2) {
            min2 = num;
        }
    }

    // Return the max of (max1*max2) and (min1*min2)
    return max(max1 * max2, min1 * min2);
}

int main() {
    vector<int> arr = {3, 5, -10, -20, 7, 6};
    int result = maxProduct(arr);

    cout << "Maximum product of two integers: " << result << endl;

    return 0;
}
