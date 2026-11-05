/*
Given a matrix mat[][] . Return the boundary traversal on the matrix in a clockwise manner starting from the first row of the matrix.

Examples:

Input: mat[][] = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15,16]]
Output: [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5]
Explanation: The boundary traversal is: [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5]
Input:mat[][] = [[12, 11, 10, 9], [8, 7, 6, 5], [4, 3, 2, 1]]
Output: [12, 11, 10, 9, 5, 1, 2, 3, 4, 8]
Explanation: The boundary traversal is: [12, 11, 10, 9, 5, 1, 2, 3, 4, 8]
Input:mat[][] = [[12, 11], [4, 3]] 
Output: [12, 11, 3, 4]
Explanation: The boundary traversal is: [12, 11, 3, 4]
Constraints:

1 ≤ mat.size(), mat[i].size() ≤ 103
0 ≤ mat[i][j] ≤ 103
*/

class Solution {
public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {

        int rows = mat.size();
        int cols = mat[0].size();

        vector<int> ans;

        for (int j = 0; j < cols; j++) {
            ans.push_back(mat[0][j]);
        }

        for (int i = 1; i < rows; i++) {
            ans.push_back(mat[i][cols - 1]);
        }

        if (rows > 1) {
            for (int j = cols - 2; j >= 0; j--) {
                ans.push_back(mat[rows - 1][j]);
            }
        }

        if (cols > 1) {
            for (int i = rows - 2; i > 0; i--) {
                ans.push_back(mat[i][0]);
            }
        }

        return ans;
    }
};
