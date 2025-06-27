#include<iostream>
using namespace std;

int main(){

     int rows = 5;
    
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int space = 1; space <= rows - i; space++) {
            cout << "  ";
        }

        // Increasing numbers
        int num = i;
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
}

 return 0;
}
