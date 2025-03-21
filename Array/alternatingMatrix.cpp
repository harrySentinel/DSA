#include <iostream>
using namespace std;

// Function to generate and display the alternating 0s and 1s matrix
void generateMatrix(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << ((i + j) % 2) << " "; // Alternates between 0 and 1
        }
        cout << endl;
    }
}

int main() {
    int size;
    
    // Taking input from user
    cout << "Enter the size of the matrix: ";
    cin >> size;
    
    // Generate and display the matrix
    generateMatrix(size);
    
    return 0;
}
