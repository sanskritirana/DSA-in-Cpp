/*
Given a matrix mat[][], reverse the order of its columns in-place so that the last column becomes the first, the second-last becomes the second, and so on.

Examples:

Input: mat[][] = [[1, 2, 3], [5, 6, 7], [11, 10, 9], [13, 14, 15]]
Output: [[3, 2, 1], [7, 6, 5], [9, 10, 11], [15, 14, 13]]
Explanation: Array after exchanging columns: [[3, 2, 1], [7, 6, 5], [9, 10, 11], [15, 14, 13]]
Input: mat[][] = [[1, 2, 3, 4, 5], [6, 7, 8, 9, 10]]
Output: [[5, 4, 3, 2, 1], [10, 9, 8, 7, 6]]
Explanation: After reversing the column of matrix: [[5, 4, 3, 2, 1], [10, 9, 8, 7, 6]]
Constraints:

1 ≤ mat.size(), mat[i].size() ≤ 100
0 ≤ mat[i][j] ≤ 103
*/

class Solution {
public:
    void reverseCol(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();

        for (int i = 0; i < rows; i++) {
            int left = 0;
            int right = cols - 1;

            while (left < right) {
                swap(mat[i][left], mat[i][right]);

                left++;
                right--;
            }
        }
    }
};
