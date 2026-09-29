/*
You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

Return the sum of all the unique elements of nums.

 

Example 1:

Input: nums = [1,2,3,2]
Output: 4
Explanation: The unique elements are [1,3], and the sum is 4.
Example 2:

Input: nums = [1,1,1,1,1]
Output: 0
Explanation: There are no unique elements, and the sum is 0.
Example 3:

Input: nums = [1,2,3,4,5]
Output: 15
Explanation: The unique elements are [1,2,3,4,5], and the sum is 15.
 

Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        sort(nums.begin(), nums.end());

        int sum = 0;

        for (int i = 0; i < n; i++) {
            bool isUnique = true;

            if (i > 0 && nums[i] == nums[i - 1]) {
                isUnique = false;
            }

            if (i < n - 1 && nums[i] == nums[i + 1]) {
                isUnique = false;
            }

            if (isUnique) {
                sum += nums[i];
            }
        }

        return sum;
    }
};
