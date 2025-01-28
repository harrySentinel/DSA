#include<iostream>
using namespace std;

void CountZeroOne(int arr[], int size){
    int ZeroCount = 0;
    int OneCount = 0;

    for(int i=0; i<size; i++){
        if(arr[i]==0){
            ZeroCount++;
        }
        if(arr[i]==1){
            OneCount++;
        }
    }
    cout << "ZeroCount " << ZeroCount << endl;
    cout << "OneCount " << OneCount << endl;
}

int main() {

    int arr[] = {0, 1, 0, 1, 1, 0, 0, 1, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]); 

    // Call the function to count zeros and ones
    CountZeroOne(arr, size);

    return 0;
}