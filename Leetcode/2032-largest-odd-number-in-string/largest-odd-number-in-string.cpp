class Solution {
public:
    string largestOddNumber(string num) {

        // Traverse the string from right to left
        // because we need to find the rightmost odd digit
        for(int i = num.length() - 1; i >= 0; i--) {

            // Convert character digit into integer using (num[i] - '0')
            // Check if the current digit is odd
            if((num[i] - '0') % 2 != 0) {

                // If an odd digit is found, return the substring
                // from the beginning up to this odd digit
                return num.substr(0, i + 1);
            }

            // Prints the current even digit (not needed for the solution)
            cout << num[i];
        }

        // If there is no odd digit in the entire string,
        // then no odd number can be formed
        return "";
    }
};