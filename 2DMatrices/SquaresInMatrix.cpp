/*
Given a mxn matrix, count the number of squares in the matrix.

Examples:

Input: m = 2, n = 2
Output: 5
Explanation: There are a total of 5 squares in a 2*2 matrix. Four 1*1 squares and one 2*2 square.
Input: m = 4, n = 3
Output: 20
Explanation: There are a total of 20 squares in a 4*3 matrix. 
Constraints:
1 <= m,n <= 104

*/

class Solution {
public:
    long long squaresInMatrix(int m, int n) {

        long long ans = 0;

        for (int k = 1; k <= min(m, n); k++) {
            ans += 1LL * (m - k + 1) * (n - k + 1);
        }

        return ans;
    }
};
