class Solution {
public:

    void getSub(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& subsets){
        if (i==nums.size()){
            subsets.push_back({ans});
            return ; 
        }
        ans.push_back(nums[i]);
        getSub(nums, ans, i+1, subsets);

        ans.pop_back(); 
        getSub(nums, ans, i+1, subsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> ans ;
        getSub(nums, ans, 0, allSubsets);
        return allSubsets; 
    }
};