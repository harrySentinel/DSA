#include <iostream>
using namespace std;

// Function to calculate the sum of squares of all even numbers up to N
int sumOfSquaresOfEvens(int N) {
    int sum = 0;
    for (int i = 2; i <= N; i += 2) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int N;
    cout << "Enter a number N: ";
    cin >> N;
    
    int result = sumOfSquaresOfEvens(N);
    cout << "The sum of squares of all even numbers up to " << N << " is: " << result << endl;
    
    return 0;
}
