#include <iostream>

using namespace std;

int squareRoot(int x) {
    if (x == 0 || x == 1)
        return x;

    int start = 1, end = x, ans = 0;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (mid * mid == x)
            return mid;
        else if (mid * mid < x) {
            start = mid + 1;
            ans = mid;
        } else {
            end = mid - 1;
        }
    }
    
    return ans; // Returns only the integer part
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Square root of " << num << " is: " << squareRoot(num) << endl;

    return 0;
}
