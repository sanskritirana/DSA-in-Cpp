/*
Given a matrix mat[][], return its elements in reverse spiral order.

Note: Reverse spiral order starts from the center of the matrix (or the closest valid center for even dimensions) and moves outward in a spiral.

Examples :

Input: mat[][] = [[9, 8, 7], [6, 5, 4], [3, 2, 1]] 
 
Output: [5, 6, 3, 2, 1, 4, 7, 8, 9]
Explanation: Spiral form of the matrix in reverse order starts from the centre and goes outward.

Input: mat[][] = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]
 
Output: [10, 11, 7, 6, 5, 9, 13, 14, 15, 16, 12, 8, 4, 3, 2, 1]
Explanation: 
  
Constraints:

1 ≤ mat.size(), mat[i].size(), mat[i][j] ≤ 500
*/
class Solution {
public:
    vector<int> reverseSpiral(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        int top = 0, bottom = n - 1;
        int left = 0, right = m - 1;

        vector<int> ans;

        while (top <= bottom && left <= right) {

            // Left to Right
            for (int i = left; i <= right; i++) {
                ans.push_back(mat[top][i]);
            }
            top++;

            // Top to Bottom
            for (int i = top; i <= bottom; i++) {
                ans.push_back(mat[i][right]);
            }
            right--;

            // Right to Left
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(mat[bottom][i]);
                }
                bottom--;
            }

            // Bottom to Top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
