class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = INT_MIN;
        int currSum = 0;
        for (int val: nums){
            currSum+=val; 
            sum = max(currSum, sum);

            if (currSum<0){
                currSum = 0; 
            }
        }
        return sum;
    }
};