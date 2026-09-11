class Solution {
public:
    string removeOuterParentheses(string s) {

        string ans = "";
        int count = 0;

        for (char ch : s) {

            if (ch == '(') {

                // If count is already > 0,
                // this '(' is NOT an outermost '('
                if (count > 0) {
                    ans += ch;
                }

                count++;
            }

            else { // ch == ')'

                count--;

                // If count is still > 0,
                // this ')' is NOT an outermost ')'
                if (count > 0) {
                    ans += ch;
                }
            }
        }

        return ans;
    }
};