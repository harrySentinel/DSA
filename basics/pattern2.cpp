#include <iostream>
using namespace std;

int main() {
    int num = 1;

    // Upper part (1 to 4 rows)
    for (int i = 1; i <= 4; i++) {
        // Print spaces
        for (int s = 1; s <= 4 - i; s++) {
            cout << "  ";
        }

        // Print numbers with '*'
        for (int j = 1; j <= i; j++) {
            cout << num;
            num++;
            if (j != i) {
                cout << "*";
            }
        }
        cout << endl;
    }

    // Store last line's starting number
    int start = num - 4;

    // Lower part (repeat in reverse: 4 to 1 rows)
    for (int i = 4; i >= 1; i--) {
        // Print spaces
        for (int s = 1; s <= 4 - i; s++) {
            cout << "  ";
        }

        // Print numbers with '*'
        int temp = start;
        for (int j = 1; j <= i; j++) {
            cout << temp;
            temp++;
            if (j != i) {
                cout << "*";
            }
        }
        cout << endl;
        start = start - (i - 1); // Update starting number
    }

    return 0;
}
