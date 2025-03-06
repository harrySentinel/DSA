#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter matrix size: ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j <= i)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}
