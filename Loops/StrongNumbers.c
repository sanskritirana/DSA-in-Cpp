/*
A Strong Number is a number whose value is equal to the sum of the factorials of its digits.

Given a positive integer n, find if it is a Strong Number.

Examples:

Input: 145
Output: true
Explanation: The sum of the factorials of its digits is: 1! + 4! + 5! = 1 + 24 + 120 = 145.
Since the sum equals the original number, 145 is a Strong Number.
Input: 5314
Output: false
Explanation: The sum of the factorials of its digits is not equal to 5314. Therefore, it is not a Strong Number.
Constraints:

1 ≤ n ≤ 104
*/

class Solution {
  public:
    int isPerfect(int N) {
        
        int sum=0;
        
        for (int i=N; i != 0; i = i / 10)
        {
            int digit = i % 10;
            
            int fact=1;
            for (int j=2; j<=digit; j++){
                fact*=j;
            }
            
            sum+=fact;
        }
        
        return (sum==N);
           
    }
  
};
