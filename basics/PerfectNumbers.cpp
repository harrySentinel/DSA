#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum == num && num != 1;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (isPerfect(number)) {
        cout << "Perfect Number" << endl;
    } else {
        cout << "Not a Perfect Number" << endl;
    }
    
    return 0;
}
