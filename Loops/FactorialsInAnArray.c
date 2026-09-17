/*
Given an array arr[] containing n integers, return a list containing all elements from the array that are factorial numbers of some positive integer.

If a factorial appears multiple times, include all occurrences in the output.
Preserve the original order.
Examples :

Input: arr[] = [2, 1, 5, 9]
Output: [2, 1]
Explanation: 
2 is the factorial of 2, i.e. 2! = 1 * 2 = 2
1 is the factorial of 1, i.e. 1! = 1
Input: arr[] = [2, 5, 3, 6, 9, 12, 24]
Output: [2, 6, 24] 
Explanation:
2 is the factorial of 2, i.e. 2! = 1 x 2 = 2 
6 is the factorial of 3, i.e. 3! = 1 × 2 × 3 = 6
24 is the factorial of 4, i.e. 4! = 1 × 2 × 3 × 4 = 24
Constraints:
1 ≤ n ≤ 105
1 ≤ arr[i] ≤ 109
*/

class Solution {
  public:
    int isFactorial(int N) {
        
        int fact = 1;
        
        for (int i = 1; fact <= N; i++) {
            fact *= i;
            
            if (fact == N) return 1;
        }
        
        return 0;
    }
};
