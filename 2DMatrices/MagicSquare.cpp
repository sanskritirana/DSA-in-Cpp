/*
Given a n*n matrix mat[][] , check whether the matrix is a magic square or not.  A Magic Square is a n x n matrix of distinct elements from 1 to n * n where the sum of any row, column, or diagonal is always equal. 

Examples:

Input: mat[][] = [[2, 7, 6], 
                 [9, 5, 1], 
                 [4, 3, 8]]
Output: true
Explanation: Sum of rows, columns, and diagonals are all equal to 15. 
Input: mat[][] = [[1, 2], 
                 [3, 4]]
Output: false
Explanation: Sum of all rows and columns are not same.
Input: mat[][] = [[1, 1, 1], 
                 [1, 1, 1],
                 [1, 1, 1]]
Output: false
Explanation: All sums are same but all elements from 1 to n2 are not present.
Constraints:

1 ≤ n ≤ 103
*/

class Solution {
public:
    bool magicSquare(vector<vector<int>>& mat) {
        int n = mat.size();

        int sum = 0;

        vector<bool> visited(n * n + 1, false);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                int x = mat[i][j];

                if (x < 1 || x > n * n)
                    return false;

                if (visited[x])
                    return false;

                visited[x] = true;
            }
        }

        for (int j = 0; j < n; j++) {
            sum += mat[0][j];
        }

        for (int i = 0; i < n; i++) {
            int rowSum = 0;

            for (int j = 0; j < n; j++) {
                rowSum += mat[i][j];
            }

            if (rowSum != sum)
                return false;
        }

        for (int j = 0; j < n; j++) {
            int colSum = 0;

            for (int i = 0; i < n; i++) {
                colSum += mat[i][j];
            }

            if (colSum != sum)
                return false;
        }

        int d1 = 0, d2 = 0;

        for (int i = 0; i < n; i++) {
            d1 += mat[i][i];
            d2 += mat[i][n - 1 - i];
        }

        if (d1 != sum || d2 != sum)
            return false;

        return true;
    }
};
