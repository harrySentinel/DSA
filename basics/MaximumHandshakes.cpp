// C++ program to find the maximum number of handshakesM
#include<iostream>
using namespace std; 

int main()
{


    int num = 9;

    int total = num * (num-1) / 2; // Combination nC2

    cout<<"For "<<num<<" people there will "<<total<<" handshakes";

    return 0;

}