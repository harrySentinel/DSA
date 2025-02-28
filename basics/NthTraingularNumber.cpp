#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int triangularNumber = (N * (N + 1)) / 2; // Formula for N-th triangular number

    cout << "The " << N << "th triangular number is: " << triangularNumber << endl;
    
    return 0;
}
