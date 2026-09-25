/*
Given an array arr, the goal is to find out the smallest number that is repeated exactly ‘k’ times.

Note: If there is no such element then return -1.

Example:

Input: arr[] = [2, 2, 1, 3, 1], k = 2
Output: 1
Explanation: 2 and 1 both appear exactly 2 times. Since we need to find the smallest, output is 1.
Input: arr[] = [3, 5, 3, 2], k = 1
Output:  2 
Explanation: 5 and 2 each appear exactly 1 time. Since we need the smallest, the output is 2.
Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i] ≤ 104

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findDuplicate(const vector<int>& arr, int k) {
        unordered_map<int, int> freq;

        for (int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }

        int ans = INT_MAX;

        for (auto it : freq) {
            if (it.second == k) {
                ans = min(ans, it.first);
            }
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};
