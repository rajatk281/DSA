class Solution {
public:
    int startVal(const vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                ans = mid;
                high = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
    int endVal(const vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {

                ans = mid;
                low = mid + 1;

            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = startVal(nums, target);
        int end = endVal(nums, target);
        vector<int> ans;
        ans.push_back(start);
        ans.push_back(end);
        return ans;
    }
};