/*
Given an integer matrix mat[][], compute the sum of all its elements.

Examples:

Input: mat[][] = [[1, 0, 1], [-8, 9, -2]]
Output: 1
Explanation: The sum of all elements of the matrix is: (1 + 0 + 1 - 8 + 9 - 2) = 1.
Input: mat[][] = [[1, 0, 1, 0, 1], [0, 1, 0, 1, 0], [-1, -1, -1, -1, -1]]
Output: 0
Explanation: The sum of all elements of the matrix is: (1 + 0 + 1 + 0 + 1 + 0 + 1 + 0 + 1 + 0 - 1 - 1 - 1 - 1 - 1) = 0.
Constraints:

1 ≤ mat.size(), mat[i].size() ≤ 103
-103 ≤ mat[i][j] ≤ 103

*/

class Solution {
  public:
    int sumOfMatrix(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int sum = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sum += mat[i][j];
            }
        }

        return sum;
    }
};
