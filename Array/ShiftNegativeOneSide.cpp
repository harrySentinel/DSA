#include<iostream>
using namespace std;

// Segregate Negative Positive Number -:

void shiftNegativeOneSide(int arr[], int n){
    int j = 0;

    for(int index=0; index<n; index++){
        if(arr[index]<0){
           if(index != j){
             swap(arr[index], arr[j]);
           }
           j++;
        }
    }
}

int main(){
 int arr[] = {1, -2, 3, -4, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    shiftNegativeOneSide(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}