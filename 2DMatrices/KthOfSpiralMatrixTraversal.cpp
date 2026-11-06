/*
Given a matrix mat[][] and a number k, find the k-th element obtained while traversing the matrix in spiral order.

Note: Spiral traversal follows a pattern where we move left to right on the top row, top to bottom on the last column, right to left on the bottom row, and bottom to top on the first column, repeating this process for the inner layers until all elements are visited.

Examples:

Input: mat[][] = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]], k = 10
Output: 13
Explanation:
 
The spiral order of matrix will look like 1->2->3->4->8->12->16->15->14->13->9->5->6->7->11->10. So the 10th element in this order is 13. 
Input: mat[][] = [[1, 2, 3], [4, 5, 6], [7, 8, 9]], k = 4
Output: 6
Explanation: The spiral order of matrix will look like 1->2->3->6->9->8->7->4->5. So the 4th element in this order is 6.
Constraints:

1 ≤ mat.size(), mat[i].size() ≤ 103
-109 ≤ mat[i][j] ≤ 109
1 ≤ k ≤ mat.size()*mat[i].size()
*/

class Solution {
public:
    int findK(vector<vector<int>>& mat, int k) {

        int n = mat.size();
        int m = mat[0].size();

        int top = 0, bottom = n - 1;
        int left = 0, right = m - 1;

        int count = 0;

        while (top <= bottom && left <= right) {

            // Left to Right
            for (int i = left; i <= right; i++) {
                count++;
                if (count == k) return mat[top][i];
            }
            top++;

            // Top to Bottom
            for (int i = top; i <= bottom; i++) {
                count++;
                if (count == k) return mat[i][right];
            }
            right--;

            // Right to Left
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    count++;
                    if (count == k) return mat[bottom][i];
                }
                bottom--;
            }

            // Bottom to Top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    count++;
                    if (count == k) return mat[i][left];
                }
                left++;
            }
        }

        return -1;
    }
};
