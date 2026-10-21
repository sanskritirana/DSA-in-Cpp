/*
Given a non-negative integer s represented as a string, count the number of digits in s that divide the number represented by s.

A digit is considered valid only if it is non-zero and the number represented by s is divisible by that digit.

If a digit appears multiple times in s, each occurrence should be counted separately.

Examples:

Input: s = "35"
Output: 1
Explanation: The digit 5 divides 35, but the digit 3 does not. So the answer is 1.
Input: s = "1122324"
Output: 7
Explanation: Every digit in "1122324" divides 1122324. So the answer is 7.
Constraints:

1 ≤ s.size() ≤ 106
s contains: [0-9].
*/

class Solution {
  public:
    int evenlyDivides(int n) {
        int count = 0;
        
        for (int i = n; i > 0; i = i / 10)
        {
            int digit = i % 10; 
            if (digit != 0 && n % digit == 0) 
                count++;
        }
        
        return count;
    }
};
