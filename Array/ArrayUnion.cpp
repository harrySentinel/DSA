#include <iostream>
#include <vector>

// will be adding another alternative method

using namespace std;

vector<int> findUnion(const vector<int>& nums1, const vector<int>& nums2) {
    vector<int> unionResult;
    vector<int> nums2Copy = nums2; // Make a copy of nums2 to track used elements

    // Add all elements from first array
    for (int i = 0; i < nums1.size(); i++) {
        unionResult.push_back(nums1[i]);
    }

    // Add elements from second array that aren't already in the union
    for (int j = 0; j < nums2Copy.size(); j++) {
        bool found = false;
        
        // Check if this element exists in nums1
        for (int k = 0; k < nums1.size(); k++) {
            if (nums2Copy[j] == nums1[k]) {
                found = true;
                break;
            }
        }
        
        // If not found in nums1, add to union
        if (!found) {
            unionResult.push_back(nums2Copy[j]);
        }
    }

    return unionResult;
}

int main() {
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(4);
    arr1.push_back(10);
    arr1.push_back(14);

    vector<int> arr2;
    arr2.push_back(3);
    arr2.push_back(4);
    arr2.push_back(5);
    arr2.push_back(6);
    arr2.push_back(7);

    vector<int> unionResult = findUnion(arr1, arr2);

    cout << "Union: ";
    for (int i = 0; i < unionResult.size(); i++) {
        cout << unionResult[i] << " ";
    }
    cout << endl;

    return 0;
}
