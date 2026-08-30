#include<iostream>
#include<vector>
using namespace std; 

// Brute Force approach ( Linear Search )
int L_lowerBound(vector<int> nums, int k){
    for (int i=0; i<nums.size(); i++){
        if (nums[i]>=k){
            return i; 
        }
    }
    return -1; 
}

// Optimal Approach (Binary Search)
int B_lowerBound(vector<int> nums, int k){
    int low =0 ;
    int high=nums.size()-1; 
    int ans=nums.size(); 
    while(low<=high){
        int mid = low+(high-low)/2; 
        if (nums[mid] >= k ) {
           ans = mid; 
           high = mid-1; 
        }
        else{
            low=mid+1; 
        }
    }
    return ans; 
}


int main (){
    vector<int> arr = {3,5,8,15,19};
    // cout<<L_lowerBound(arr, 9);
    cout<<B_lowerBound(arr, 9);
}