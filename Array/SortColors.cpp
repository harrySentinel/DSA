#include<iostream>
#include<vector>
using namespace std;

void SortColors(vector<int> &nums){
    int n = nums.size();
    int index = 0;
    int left = 0;
    int right = n-1;
    
    while(index <= right){
        if(nums[index]==0){
            swap(nums[index], nums[left]);
            left++;
            index++;
        }
        else if(nums[index]==2){
            swap(nums[index], nums[right]);
            right--;
            
            // catch here is , there is no need of index++
        }
        else{
            index++;
        }
    }
}

int main(){
  vector<int> nums = {2, 0, 2, 1, 1, 0}; 
  
    SortColors(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}