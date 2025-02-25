#include <iostream>
using namespace std;

int main() {
    int start, end, sum = 0;
    cout << "Enter the start and end of the range: ";
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0)
            sum += i;
    }

    cout << "Sum of even numbers: " << sum << endl;
    return 0;
}
