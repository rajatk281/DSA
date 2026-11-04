class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fiveBank = 0;
        int tenBank = 0;
        for (int val : bills) {
            if (val == 5 ) {
                fiveBank++;
            } else if (val == 10) {
                if (fiveBank > 0) {
                    fiveBank--;
                } else {
                    return false;
                }
                tenBank++;
            } else {
                if (tenBank > 0 && fiveBank > 0) {
                    tenBank--;
                    fiveBank--;
                }
                else if (fiveBank > 2) {
                    fiveBank = fiveBank - 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};