#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(const vector<int>& arr) {
    int maxVal = 0;

    // Find the maximum value in the array
    for (int num : arr) {
        if (num > maxVal) maxVal = num;
    }

    // Frequency array
    vector<int> freq(maxVal + 1, 0);
    vector<int> duplicates;

    for (int num : arr) {
        freq[num]++;
        if (freq[num] == 2) {
            duplicates.push_back(num);
        }
    }

    return duplicates;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 2, 3, 5, 6, 3, 2};
    vector<int> result = findDuplicates(arr);

    cout << "Duplicate numbers: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
