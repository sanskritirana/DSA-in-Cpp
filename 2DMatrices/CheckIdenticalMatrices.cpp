/*
Given two square matrices mat1[][] and mat2[][], determine whether the matrices are identical or not.

Examples:

Input: mat1[][] = [[1, 2], [3, 4]], mat2[][] = [[1, 2], [3, 4]]
Output: true
Explanation: Both the matrices are identical, so the answer is 1.
Input: mat1[][] = [[1, 2], [3, 4], mat2[][] = [[1, 2], [3, 2]]
Output: false
Explanation: Both the matrices are not identical, So, answer is 0.
Constraints:

1 ≤ mat1.size() ≤ 103
-103 ≤ mat1[i][j], mat2[i][j] ≤ 103
mat2.size() = mat1.size()
mat1[i].size() = mat1.size()
mat2[i].size() = mat1[i].size()
*/

class Solution {
public:
    bool identicalMat(vector<vector<int>> &mat1,
                              vector<vector<int>> &mat2) {

        int n = mat1.size();
        int m = mat1[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat1[i][j] != mat2[i][j]) {
                    return false;
                }
            }
        }

        return true;
    }
};
