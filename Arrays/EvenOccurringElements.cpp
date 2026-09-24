/*
Given an array arr[] of integers, find and return the elements with even occurrences in the array. If no such element exists, return -1. Elements should be returned in order of occurrence.

Examples:

Input: arr[] = [9, 12, 23, 10, 12, 12, 15, 23, 14, 12, 15]
Output: [12, 15, 23]
Explanation: The numbers 12, 15, and 23 each appear an even number of times.
Input: arr[] = [23, 12, 56, 34, 32]
Output: [-1]
Explanation: Every number in the array occurs an odd number of times.
Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i] ≤ 105
*/

class Solution {
public:
    vector<int> findEvenOccurrences(vector<int>& arr) {

        unordered_map<int, int> freq;

        for (int x : arr) {
            freq[x]++;
        }

        vector<int> ans;
        unordered_set<int> added;

        for (int x : arr) {

            if (freq[x] % 2 == 0 && added.count(x) == 0) {
                ans.push_back(x);
                added.insert(x);
            }
        }

        if (ans.empty()) {
            return {-1};
        }

        return ans;
    }
};
