#include<iostream>
#include<vector>
using namespace std; 

class occurence{
    public: 

    int firstOccurence(const vector<int>& nums, int k ){
        int low=0; 
        int high=nums.size()-1; 
        int ans = -1; 
        while(low<=high){
            int mid = low+(high-low)/2;
            if (nums[mid]==k){
                ans = mid; 
                high=mid-1; 
            }else if(nums[mid]<k){
                low = mid+1; 
            }else{
                high = mid-1; 
            }
        }
        return ans; 
    }

    int lastOccurence(const vector<int>& nums, int k ){
        int low=0; 
        int high=nums.size()-1; 
        int ans = -1; 
        while(low<=high){
            int mid = low+(high-low)/2;
            if (nums[mid]==k){
                ans = mid; 
                low=mid+1;
            }else if(nums[mid]<k){
                low = mid+1; 
            }else{
                high = mid-1; 
            }
        }
        return ans; 
    }

    int freq(const vector<int>& nums, int k){
        int start = firstOccurence(nums, k);
        int end = lastOccurence(nums, k);
        int freq = end-start + 1; 
        return freq; 
}

};  

int main(){
    vector<int> arr = {2, 2 , 3 , 3 , 3 , 3 , 4};
    occurence o; 
    cout<<o.freq(arr, 3);
}