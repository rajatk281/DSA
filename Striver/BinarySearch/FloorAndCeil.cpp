#include<iostream>
#include<vector>
using namespace std; 

class FloorAndCeil {
    public: 
    // Functions to find the floor of x
    int floorVal(const vector<int>& nums, int k){
        int ans = -1; 
        int low = 0; 
        int high = nums.size()-1; 
        while(low<=high){
            int mid = low + (high-low)/2; 
            if (nums[mid]<=k){
                ans=nums[mid];
                low=mid+1; 
            }else{
                high = mid-1; 
            }
        }
        return ans; 
    }
    // Function to find the ceil
    int ceilVal(const vector<int>& nums, int k){
        int ans = -1; 
        int low = 0; 
        int high = nums.size()-1; 
        while(low<=high){
            int mid = low + (high-low)/2; 
            if (nums[mid]>=k){
                ans=nums[mid];
                high = mid-1; 
            }else{
                low=mid+1; 
            }
        }
        return ans; 
    }
    pair<int, int> finalAns(const vector<int>& nums, int k){
        pair<int, int> pr; 
        pr.first = floorVal(nums, k);
        pr.second = ceilVal(nums, k);
        return pr ;
    }
};

int main(){
    vector<int> nums = {3, 4, 4, 7, 8, 10};
    FloorAndCeil fc; 
    pair <int, int> ans = fc.finalAns(nums, 5);
    cout<< ans.first << "  "<< ans.second;
}