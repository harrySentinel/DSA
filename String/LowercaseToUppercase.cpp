#include <iostream>
using namespace std;

int main() {
    char lower;
    cout << "Enter a lowercase letter: ";
    cin >> lower;

    // Convert using ASCII logic
    char upper = lower - ('a' - 'A');  // or upper = lower - 32;

    cout << "Uppercase letter: " << upper << endl;

    return 0;
}
