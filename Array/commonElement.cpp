#include <iostream>
#include <vector>
using namespace std;

// Function to find common elements between two arrays
vector<int> findCommonElements(const vector<int>& array1, const vector<int>& array2) {
    vector<int> commonElements;
    for (int i = 0; i < array1.size(); i++) {
        for (int j = 0; j < array2.size(); j++) {
            if (array1[i] == array2[j]) {
                commonElements.push_back(array1[i]);
                break; // Avoid duplicates
            }
        }
    }
    return commonElements;
}

int main() {
    vector<int> array1 = {1, 2, 3, 4};
    vector<int> array2 = {3, 4, 5, 6};
    
    vector<int> result = findCommonElements(array1, array2);
    
    cout << "Common elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
