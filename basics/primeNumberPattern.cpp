#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int num = 2, count;
    
    for (int i = 1; i <= rows; i++) {
        count = 0;
        while (count < i) {
            bool prime = true;
            
            // Check if num is prime
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime) {
                cout << num << " ";
                count++;
            }
            num++;
        }
        cout << endl;
    }
    
    return 0;
}
