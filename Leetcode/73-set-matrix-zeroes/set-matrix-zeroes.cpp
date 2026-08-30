class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        // Store which rows contain at least one 0
        vector<bool> zeroRow(rows, false);

        // Store which columns contain at least one 0
        vector<bool> zeroCol(cols, false);

        // ---------------------------------------------------
        // STEP 1: Find all the original zeros
        // ---------------------------------------------------
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                if (matrix[i][j] == 0) {
                    zeroRow[i] = true;
                    zeroCol[j] = true;
                }
            }
        }

        // ---------------------------------------------------
        // STEP 2: Make the required rows and columns zero
        // ---------------------------------------------------
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                // If this row OR this column originally
                // contained a zero, make this cell zero.
                if (zeroRow[i] || zeroCol[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};