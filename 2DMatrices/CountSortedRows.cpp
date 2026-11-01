/*
Given a matrix mat[][], count the number of rows that are sorted either in strictly increasing order or strictly decreasing order.

Examples:

Input: mat[][] = [[1, 2, 3], [6, 5, 4], [7, 9, 8]]
Output: 2
Explanation: The first row is sorted in strictly increasing order while the second row is sorted in strictly decreasing order.
Input: mat[][] = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
Output: 3
Explanation: All the rows are sorted in strictly increasing order.
Constraints:
1 ≤ n, m, mat[i][j] ≤ 103
*/

class Solution {
public:
    int sortedCount(vector<vector<int>>& mat) {
        int count = 0;

        for (auto &row : mat) {
            bool inc = true, dec = true;

            for (int j = 1; j < row.size(); j++) {
                if (row[j] <= row[j-1])
                    inc = false;

                if (row[j] >= row[j-1])
                    dec = false;
            }

            if (inc || dec)
                count++;
        }

        return count;
    }
};
