#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int sum = 0;
    int n = nums.size();

    for (int index = 0; index < n; index++) {
        sum += nums[index];
    }

    int totalSum = (n * (n + 1)) / 2;
    int ans = totalSum - sum;

    return ans;
}

int main() {
    vector<int> nums = {3, 0, 1}; 
    cout << "Missing Number: " << missingNumber(nums) << endl;
    return 0;
}
