class Solution {
public:
    void recSwap(vector<int>& nums, int i, int j) {
        if (i >= j)
            return;
        swap(nums[i], nums[j]);
        i++;
        j--;
        recSwap(nums, i, j);
    }
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 1;
        while (i > 0) {
            if (nums[i - 1] >= nums[i]) {
                i--;
            } else {
                int j = nums.size() - 1;
                while (j > i - 1 && nums[j] <= nums[i - 1]) {
                    j--;
                }
                swap(nums[i - 1], nums[j]);
                recSwap(nums, i, nums.size() - 1);
                break;
            }
        }
        if (i == 0) {
            recSwap(nums, 0, nums.size() - 1);
        }
    }
};