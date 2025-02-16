#include <iostream>
using namespace std;

// finding square root using sqrt() function
int sqrtBinarySearch(int x) {
    if (x == 0 || x == 1) return x;
    
    int left = 1, right = x, ans = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (mid <= x / mid) {
            ans = mid;
            left = mid + 1; // Search in right half
        } else {
            right = mid - 1; // Search in left half
        }
    }
    return ans;
}

int main() {
    int x = 10;
    cout << sqrtBinarySearch(x);
    return 0;
}
