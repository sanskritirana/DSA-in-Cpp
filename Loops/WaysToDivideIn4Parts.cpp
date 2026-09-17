/*
Given a positive integer n, count the number of ways to represent n as the sum of four positive integers.

In each representation: a + b + c + d = n
where: a > 0, b > 0, c > 0, d > 0
Return the total number of such representations.

Examples:

Input: n = 5
Output: 1
Explanation: The only possible representation is: 1 + 1 + 1 + 2 = 5. Therefore, the answer is 1.
Input: n = 41
Output: 511
Explanation: There are 511 different ways to represent 41 as the sum of four positive integers. Therefore, the answer is 511.
Constraints:
0 ≤ n ≤ 100
*/

class Solution {
  public:
    int countWays(int N) {
        int count = 0;
    
        for (int a = 1; a <= N; a++) {
            for (int b = a; b <= N; b++) {
                for (int c = b; c <= N; c++) {
                    
                    int d = N - (a + b + c);
                    
                    if (d < c) continue;  
                    
                    if (d >= c)
                        count++;
                }
            }
        }
    
        return count;
    }
};
