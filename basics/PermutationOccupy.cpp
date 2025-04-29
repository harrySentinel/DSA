#include<iostream>
using namespace std;
    

int factorial(int num)
{
    int fact=1;
    for(int i=num; i>=1 ;i--)
        fact*=i;
    return fact;
}
    
int main()
{
    int n,r;
    
    cout<<"Enter number of people: ";
    cin>>n;
    
    cout<<"Enter number of seats: ";
    cin>>r;
        
        
    //finding all possible arrangements of n people on r seats
    // by using formula of permutation
    int p = factorial(n)/factorial(n-r);

    //printing output
    printf("Total possible arrangements: %d",p);

    return 0;
}