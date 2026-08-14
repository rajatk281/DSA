class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0; 
       
        unordered_set<int> us;  
        for (int val: nums ){
            us.insert(val);
        }
        if (us.size()==1) return 1; 

        int maxFreq = 1; 
        for (int val: us){
            if (!us.contains(val-1)){
                int count=1; 
                int current=val; 
                while(us.contains(current+1)){
                    count++; 
                    current++; 
                }
                maxFreq = max(maxFreq, count);
            }
        }
        return maxFreq; 
    }
};