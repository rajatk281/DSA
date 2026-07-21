#include<iostream>
#include <algorithm>
#include<vector>
using namespace std; 

int bruteLongestSubArrayWithSumK(vector<int> nums, int t ){
    int len = 0;
    for (int i=0; i<nums.size(); i++){
        for ( int j = i; j<nums.size(); j++){
            int sum = 0; 
            int count = 0; 
            for ( int k=i; k<=j; k++){
                sum+=nums[k];
                count++;
            }
            if (sum==t) {
                len = max(len, count);
            }
        }
    }
    return len; 
}
int ooptimisedLongestSubArrayWithSumK(vector<int> nums, int t ){
    int right = 0; 
    int left = 0; 
    int maxLen = 0; 
    int sum = nums[0];
    
    while(right<nums.size()){

        while( left<= right && sum>t ){
            sum-=nums[left];
            left++; 
        }

        if ( sum == t) {
            int len = right - left + 1; 
            maxLen = max(maxLen, len);
        }
        right++;
        if(right < nums.size()) sum += nums[right];
    }
    return maxLen;
}

int main(){
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    // cout<< bruteLongestSubArrayWithSumK(nums, 15);
    cout<< ooptimisedLongestSubArrayWithSumK(nums, 15);
}