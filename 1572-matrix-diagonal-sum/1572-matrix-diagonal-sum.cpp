class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;

        for (int i = 0; i < n; ++i) {
            // Add elements from the primary diagonal
            sum += mat[i][i];
            // Add elements from the secondary diagonal
            sum += mat[i][n - 1 - i];
        }

        // If n is odd, the center element was added twice, so subtract it once
        if (n % 2 == 1) {
            sum -= mat[n / 2][n / 2];
        }

        return sum;
    }
};
