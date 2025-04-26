#include <iostream>
using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "GCD of the givn number is " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    return 0;
}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n1 = 18, n2 = 45, gcd = 1;
    
//     for(int i = 1; i <= n1 || i <= n2; i++) {
//         if(n1 % i == 0 && n2 % i == 0)
//             gcd = i;
//     }
    
//     cout<<"The GCD is "<< gcd;
    
//     return 0;
// }