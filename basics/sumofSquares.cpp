#include <iostream>
using namespace std;

// Function to calculate the sum of squares of even numbers up to N
int sumOfSquaresEvenNumbers(int N) {
    int sum = 0;
    for (int i = 2; i <= N; i += 2) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int N = 4;
    cout << "Output: " << sumOfSquaresEvenNumbers(N) << endl;
    return 0;
}
