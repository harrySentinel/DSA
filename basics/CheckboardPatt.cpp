#include <iostream>

using namespace std;

int main() {
    int n = 4;  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ((i + j) % 2 == 0 ? 'X' : 'O');
        }
        cout << "\n";
    }
    return 0;
}
