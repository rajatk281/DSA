class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v(201, 0);
        vector<int> temp;
        for (int i=0; i<nums.size(); i++){
            v[nums[i]+100]++; 
        }
        for (int i=0; i<=200; i++){
            if (v[i]>=1){
                temp.push_back(i-100);
            }
        }
        for (int i=0; i<temp.size(); i++){
            nums[i] = temp[i];
        }
        return temp.size();
    }
};