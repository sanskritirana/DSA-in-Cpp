/*
Given two square matrices mat1[][] and mat2[][], each of size n × n. Multiply these two matrices and return the resulting matrix.

Examples:

Input: mat1[][] = [[1, 1, 1], [1, 1, 1], [1, 1, 1]], mat2[][] = [[1, 1, 1], [1, 1, 1], [1, 1, 1]]
Output: [[3, 3, 3], [3, 3, 3], [3, 3, 3]]
Explanation: After multiplying mat1 and mat2 we get the resulting matrix equal to [[3, 3, 3], [3, 3, 3], [3, 3, 3]].
Input: mat1[][] = [[1, 2], [3, 4]], mat2[][] = [[4, 3], [2, 1]]
Output: [[8, 5], [20, 13]]
Explanation: After multiplying mat1 and mat2 we get the resulting matrix equal to [[8, 5], [20, 13]]
Constraints:
1 ≤ n ≤ 100
1 ≤ mat1[i][j], mat2[i][j] ≤ 100
*/

class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {

        int r1 = mat1.size();
        int c1 = mat1[0].size();
        int c2 = mat2[0].size();

        vector<vector<int>> ans(r1, vector<int>(c2, 0));

        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c2; j++) {
                for(int k = 0; k < c1; k++) {

                    ans[i][j] += mat1[i][k] * mat2[k][j];

                }
            }
        }

        return ans;
    }
};
