class Solution {
public:
    int minBitFlips(int start, int goal) {
        int flip = 0; 
        int idx = 0;
        while(idx<32){
            if ( (start&(1<<idx)) != (goal&(1<<idx)) ) flip++; 
            idx++; 
        }
        return flip; 
    }
};