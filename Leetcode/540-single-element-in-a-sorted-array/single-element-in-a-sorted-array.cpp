class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0; 
        int high = nums.size()-1;
        int midVal=0; 
        while(low<high){
            // if (nums.size()==1){
            //     return nums[0];
            // }
            int mid = low+(high-low)/2;
            midVal = mid; 
            if (nums[low]==nums[low+1]){
                low=low+2; 
            }else{
                return nums[low];
            }
            if (nums[high]==nums[high-1]){
                high = high-2; 
            }else{
                return nums[high];
            }
        }
        return nums[midVal];
    }
};