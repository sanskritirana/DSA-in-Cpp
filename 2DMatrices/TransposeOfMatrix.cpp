/*
Given a square matrix of size n x n, return the transpose matrix of the given matrix.

The transpose of a matrix is obtained by converting all the rows to columns and all the columns to rows.

Examples:

Input : mat[][] = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
Output : [[1, 4, 7], [2, 5, 8], [3, 6, 9]]
Explanation: The first row [1, 2, 3] becomes the first column, the second row [4, 5, 6] becomes the second column, and the third row [7, 8, 9] becomes the third column.

Input : mat[][] =  [[1, 2], [1, 2]]
Output : [[1, 1], [2, 2]]
Explanation: The first column contains the first elements of both rows, [1, 1], and the second column contains the second elements, [2, 2].

Constraints:

1 ≤ n ≤ 103
-109 ≤ mat[i][j] ≤ 109
mat.size() = n
mat[i].size() = n

*/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();

        vector<vector<int>> ans(n, vector<int>(m));

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                ans[j][i] = mat[i][j];
            }
        }

        return ans;
    }
};
