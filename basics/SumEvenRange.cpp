#include <iostream>
using namespace std;

int sumOfEvenNumbers(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) sum += i;
    }
    return sum;
}

int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    int result = sumOfEvenNumbers(start, end);
    cout << "Sum of even numbers in range [" << start << ", " << end << "] = " << result << endl;

    return 0;
}

