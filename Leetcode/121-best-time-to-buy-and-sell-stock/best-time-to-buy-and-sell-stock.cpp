class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profit = 0;
        int buyPrice = nums[0];
        for (int i=1; i<nums.size(); i++){
            buyPrice = min(buyPrice, nums[i-1]);
            profit = max(profit, nums[i] - buyPrice);
        }
        return profit; 
    }
};