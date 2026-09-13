/*
Given an integer n, find all Pronic Numbers less than or equal to n. A Pronic Number is a number that can be expressed as the product of two consecutive integers, i.e., i × (i + 1) for some non-negative integer i. Return all such Pronic Numbers in increasing order.

Examples:

Input: n = 6
Output: 0 2 6
Explanation: 0 is the product of 0 and 1. 2 is the product of 1 and 2. 6 is the product of 2 and 3.
Input: n = 56
Output: 0 2 6 12 20 30 42 56
Explanation: 
0 is the product of 0 and 1. 
2 is the product of 1 and 2. 
6 is the product of 2 and 3. 
12 is the product of 3 and 4. and so on.
Constraints: 
0 ≤ n ≤ 109
*/

class Solution {
  public:
    vector<int> pronicNumbers(int N) {
    
    vector<int> v;
    
    for (int k = 0; k * (k + 1) <= N; k++) {
        v.push_back(k * (k + 1));
    }
    
    return v;
}
};
