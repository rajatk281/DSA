class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.empty() || nums.size()==1)
            return;

        int dropper = 0;
        int checker = 1;
        while (checker < nums.size()) {
            if (nums[dropper] == 0 && nums[checker] != 0) {
                swap(nums[dropper], nums[checker]);
                dropper++;
                checker++;
            } else if (nums[dropper] == 0 && nums[checker] == 0){
                checker++;
            }else {
                dropper++;
                checker++;
            }
        }
    }
};