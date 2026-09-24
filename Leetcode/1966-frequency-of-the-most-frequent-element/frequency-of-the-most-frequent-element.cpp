class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        
        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        int left = 0;
        long long sum = 0;
        int ans = 1;

        // Step 2: Expand the window using right
        for (int right = 0; right < nums.size(); right++) {

            // Add current element to window sum
            sum += nums[right];

            // Number of elements in current window
            long long windowSize = right - left + 1;

            // We want to make every element equal to nums[right]
            // Cost = target * number of elements - sum
            long long operations =
                1LL * nums[right] * windowSize - sum;

            // Step 3: If we don't have enough operations,
            // shrink the window from the left
            while (operations > k) {

                sum -= nums[left];
                left++;

                windowSize = right - left + 1;

                operations =
                    1LL * nums[right] * windowSize - sum;
            }

            // Current window is valid
            ans = max(ans, (int)windowSize);
        }

        return ans;
    }
};