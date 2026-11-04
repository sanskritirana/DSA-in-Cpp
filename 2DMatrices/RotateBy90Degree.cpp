/*
Given a square matrix mat[][]. The task is to rotate it by 90 degrees in an anti-clockwise direction without using any extra space. 

Examples:

Input: mat[][] = [[0, 1, 2], [3, 4, 5], [6, 7, 8]] 
Output: [[2, 5, 8], [1, 4, 7], [0, 3, 6]]
Input: mat[][] = [[1, 2], [3, 4]]
Output: [[2, 4], [1, 3]]
Constraints:

1 ≤ mat.size() ≤ 102
0 ≤ mat[i][j] ≤ 103
mat[i].size() = mat.size()
*/

class Solution {
public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }

        for (int j = 0; j < n; j++) {
            int top = 0;
            int bottom = n - 1;

            while (top < bottom) {
                swap(mat[top][j], mat[bottom][j]);
                top++;
                bottom--;
            }
        }
    }
};
