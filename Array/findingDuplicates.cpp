#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(vector<int> &arr) {

    int n = arr.size();
    vector<int> freqArr(n);
    vector<int> result;

    // Step 2: Iterate through the array and count
    // element frequencies
    for (int i = 0; i < n; i++) {
        freqArr[arr[i]]++;
    }

    // Step 3: Iterate through all the possible elements to check
    // duplicates
    for (int i = 0; i < n; i++) {
        if (freqArr[i] > 1) {
            result.push_back(i);
        }
    }

    // Step 4: If no duplicates found, add -1 to the result
    if (result.empty()) {
        result.push_back(-1);
    }

    // Step 6: Return the result vector containing
    // duplicate elements or -1
    return result;
}

int main() {
    vector<int> arr = {1, 6, 5, 2, 3, 3, 2};

    vector<int> duplicates = findDuplicates(arr);

    for (int element : duplicates) {
        cout << element << " ";
    }

    return 0;
}