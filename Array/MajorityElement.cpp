#include <iostream>
#include <vector>
using namespace std;

// Function to find the Majority element in an array
int majorityElement(vector<int>& arr) {
    int n = arr.size();  

    // Loop to consider each element as a candidate for majority
    for (int i = 0; i < n; i++) {
        int count = 0; 

        // Inner loop to count the frequency of arr[i]
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Check if count of arr[i] is more than half the size of the array
        if (count > n / 2) {
            return arr[i]; 
        }
    }

    
    return -1;
}

int main() {
    vector<int> arr = {1, 1, 2, 1, 3, 5, 1};
    
    cout << majorityElement(arr) << endl;

    return 0;
}


// element in an array using sorting
// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to find Majority element in a vector
// // it returns -1 if there is no majority element
// int majorityElement(vector<int>& arr) {
//     int n = arr.size();
//     sort(arr.begin(), arr.end());
    
//     // potential majority element
//     int candidate = arr[n/2];  

//     // Count how many times candidate appears
//     int count = 0;
//     for (int num : arr) {
//         if (num == candidate) {
//             count++;
//         }
//     }

//     if (count > n/2) {
//         return candidate;
//     }
    
//     // No majority element
//     return -1;  
// }


// int main() {
//     vector<int> arr = {1, 1, 2, 1, 3, 5, 1};
  
//     cout << majorityElement(arr);

//     return 0;
// }