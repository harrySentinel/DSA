#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
    double base = 1.5;
    double expo1 = 2.5;
    double expo2 = -2.5;
    double res1, res2;
    
    
    res1 = pow(base, expo1);
    res2 = pow(base, expo2);
    
    cout << base << " ^ " << expo1 << " = " << res1 << endl;
    cout << base << " ^ " << expo2 << " = " << res2 << endl;
    
    return 0;
}

/*
#include<iostream>
using namespace std;

int main() 
{
    double base = 1.5;
    // Works only when exponent is positive integer
    int expo = 2;
    double res = 1.0;
    
    while (expo != 0) {
        res *= base;
        expo--;
    }
    
    cout << "Result = " << res;
    
    return 0;
}

*/