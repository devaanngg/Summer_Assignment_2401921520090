class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size() - 1;
        int sum = 0;
        for (int i = 0; i <= n; i++) {
            sum += mat[i][i];
        }
        int j = n;
        for (int i = 0; i <= n; i++) {

            sum += mat[i][j];
            j--;
        }
        if (n % 2 == 0) {
            sum -= mat[n / 2][n / 2];
        }
        return sum;
    }
};
