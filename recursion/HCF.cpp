#include<iostream>
using namespace std;


int getHCF(int num1, int num2)
{
   if (num1 == 0)
      return num2;

   if (num2 == 0)
      return num1;


   if (num1 == num2)
      return num1;

   if (num1 > num2)
      return getHCF(num1 - num2, num2);

   return getHCF(num1, num2 - num1);
}

int main()
{
   int num1 = 96, num2 = 56, HCF = 1;

   HCF = getHCF(num1, num2);

   cout<<"HCF of "<<num1<<" and "<<num2<<" is "<<HCF;

   return 0;
}

/*
#include<iostream>
using namespace std;

int getHCF(int a, int b)
{
  return b == 0 ? a : getHCF(b, a % b);
}

int main()
{
  int num1 = 96, num2 = 56, HCF;

  HCF = getHCF(num1, num2);

  cout<<"HCF of "<<num1<<" and "<<num2<<" is "<<HCF;

  return 0;
}
*/