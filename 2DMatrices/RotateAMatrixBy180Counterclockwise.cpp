/*
Given a 2D square matrix mat[][], rotate it by 180 degrees without using extra space.

Note: You must rotate the matrix in place and modify the input matrix directly.

Examples:

Input:  mat[][] = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
Output: [[9, 8, 7], [6, 5, 4], [3, 2, 1]]
Explanation:

The output matrix is the input matrix rotated by 180 degrees.
Input: mat[][] = [[1, 2], [3, 4]]
Output: [[4, 3], [2, 1]]
Explanation : The output matrix is the input matrix rotated by 180 degrees.
Constraints:

1 ≤ mat.size() ≤ 500
0 ≤ mat[i][j] ≤ 104
mat[i].size() = mat.size()
*/

class Solution {
public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();

        reverse(mat.begin(), mat.end());

        for (int i = 0; i < n; i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }
};
