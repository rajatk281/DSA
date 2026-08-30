#include<iostream>
#include<vector>
using namespace std; 

int lowerBound(vector<int> nums, int k){
    for (int i=0; i<nums.size(); i++){
        if (nums[i]>=k){
            return i; 
        }
    }
    return -1; 
}

int main (){
    vector<int> arr = {3,5,8,15,19};
    cout<<lowerBound(arr, 9);
}