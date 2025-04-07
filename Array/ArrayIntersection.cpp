#include <iostream>
#include <vector>

using namespace std;

vector<int> findIntersection(const vector<int>& nums1, const vector<int>& nums2) {
    vector<int> result;
    vector<bool> used(nums2.size(), false); // Track used elements

    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            if (nums1[i] == nums2[j] && !used[j]) {
                result.push_back(nums1[i]);
                used[j] = true;
                break; // Move to next nums1 element
            }
        }
    }

    return result;
}

int main() {
    vector<int> arr1;
    arr1.push_back(3);
    arr1.push_back(5);
    arr1.push_back(2);
    arr1.push_back(2);
    arr1.push_back(8);

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(9);
    arr2.push_back(5);
    arr2.push_back(2);
    arr2.push_back(1);

    vector<int> intersection = findIntersection(arr1, arr2);

    cout << "Intersection: ";
    for (int i = 0; i < intersection.size(); i++) {
        cout << intersection[i] << " ";
    }
    cout << endl;

    return 0;
}