/*
Given an array arr, find the floor of average of the prefix array at every index. 

Examples:

Input: arr[] = [10, 20, 30, 40, 50]
Output: [10, 15, 20, 25, 30] 
Explanation: 10 / 1 = 10, (10 + 20) / 2 = 15, (10 + 20 + 30) / 3 = 20 and so on.
Input: arr[] = [12, 1]
Output: [12, 6] 
Constraints:

1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 106
*/

class Solution {
public:
    vector<int> prefixAvg(vector<int>& arr) {
        vector<int> ans;
        long long sum = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            ans.push_back(sum / (i + 1));
        }

        return ans;
    }
};
