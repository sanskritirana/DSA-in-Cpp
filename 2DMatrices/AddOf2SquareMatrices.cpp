/*
Given two square matrices a[][] and b[][]. Compute the sum of these two matrices and store the result in the matrix a[][] itself.

Examples:

Input: a[][] = [[1, 2], [3, 4]], b[][] = [[4, 3], [2, 1]]
Output: [[5, 5], [5, 5]]
Explanation: The will be: [[5, 5], [5, 5]] on adding the corresponding elements of both matrices.
Input: a[][] = [[7, 8], [9, 10]], b[][] = [[1, 2], [3, 4]]
Output: [[8, 10], [12, 14]]
Explanation: The result will be [[8, 10], [12, 14]] after adding the corresponding elements of both matrices. 
Constraints:

1 ≤ a.size() ≤ 100
b.size() = a.size()
a[i].size() = a.size()
b[i].size() = a[i].size()
*/

class Solution {
public:
    void addMat(vector<vector<int>> &a, vector<vector<int>> &b) {

        int n = a.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] += b[i][j];
            }
        }
    }
};
