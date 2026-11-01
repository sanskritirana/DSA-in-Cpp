/*
Give a n * n square matrix mat[][], return all the elements of its anti-diagonals from top to bottom.

Examples :

Input: n = 2, mat[][] = [[1, 2],
                        [3, 4]]
Output: [1, 2, 3, 4]
Explanation: 

Input: n = 3, mat[][] = [[1, 2, 3],
                       [4, 5, 6],
                       [7, 8, 9]]
Output: [1, 2, 4, 3, 5, 7, 6, 8, 9]
Explanation: 

Constraints:
1 ≤ n ≤ 103
0 ≤ mat[i][j] ≤ 106
*/

class Solution {
public:
    vector<int> diagView(vector<vector<int>> mat) {
        int n = mat.size();
        vector<int> ans;

        for (int d = 0; d < 2 * n - 1; d++) {
            int r = max(0, d - n + 1);
            int c = min(d, n - 1);

            while (r < n && c >= 0) {
                ans.push_back(mat[r][c]);
                r++;
                c--;
            }
        }

        return ans;
    }
};
