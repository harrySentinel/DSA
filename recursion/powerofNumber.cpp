#include<bits/stdc++.h>
using namespace std;

//Recursive Function
int power(int base, int x){

if(x==0) //Base Condition
  return 1;

return (base*power(base, x-1));
}
//Driver Code
int main(){
int base = 5, x = 3;
cout<<"Required Power is "<<power(base, x);
}