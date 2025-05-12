#include <iostream>
using namespace std;

int main() {
    char upper;
    cout << "Enter an uppercase letter: ";
    cin >> upper;

    // Convert using ASCII logic
    char lower = upper + ('a' - 'A');  // or lower = upper + 32;

    cout << "Lowercase letter: " << lower << endl;

    return 0;
}
