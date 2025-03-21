#include <iostream>
using namespace std;

// Function to generate a right-angle triangle pattern
void generateTriangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int height;
    
    // Taking input from user
    cout << "Enter the height of the triangle: ";
    cin >> height;
    
    // Generate and display the pattern
    generateTriangle(height);
    
    return 0;
}
