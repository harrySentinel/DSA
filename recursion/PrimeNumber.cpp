#include <iostream>
using namespace std;

bool isPrime(int n, int i = 2)
{
    
    if (n <= 2) return (n == 2) ? true : false; if (n % i == 0) return false; if (i * i > n)
       return true;

    return isPrime(n, i + 1);
}


int main()
{
    int n = 34;
    if (isPrime(n))
       cout << "Prime Number";
    else
       cout << "Not a Prime";

    return 0;
}

/*
#include <iostream>
using namespace std;

bool isPrime(int n)
{
   for(int i=2; i<=sqrt(n); i++){
       if(n%i==0)
         return false;
   }

   return true;
}


int main()
{
   int n = 21;
   if (isPrime(n))
      cout << "Prime Number";
   else
      cout << "Not Prime";

   return 0;
}
*/