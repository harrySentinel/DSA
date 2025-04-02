#include <iostream>
using namespace std;

int triangular_number(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    
    cout << "The " << N << "th triangular number is: " << triangular_number(N) << endl;
    return 0;
}
