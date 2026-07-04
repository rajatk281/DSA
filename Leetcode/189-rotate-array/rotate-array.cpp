class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        for (int i =0; i<nums.size(); i++){
            temp[i]=nums[i];
        }
        for (int i = 0; i<nums.size(); i++){
            int newIdx = (k+i)%nums.size();
            nums[newIdx] = temp[i];
        }
        return ; 
    }
};