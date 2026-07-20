#include<iostream>
#include <algorithm>
#include<vector>
using namespace std; 

int longestSubArrayWithSumK(vector<int> nums, int t ){
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
                len = max(len, count) ;
            }
        }
    }
    return len; 
}

int main(){
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    cout<< longestSubArrayWithSumK(nums, 15);
}