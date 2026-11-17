/*
Given an array, arr[]. Find the minimum index based distance between two different elements of the array, x and y. Return -1, if either x or y does not exist in the array.

Examples:

Input: arr[] = [1, 2, 3, 2], x = 1, y = 2
Output: 1
Explanation: x = 1 and y = 2. There are two distances between x and y, which are 1 and 3 out of which the least is 1.
Input: arr[] = [86, 39, 90, 67, 84, 66, 62], x = 42, y = 12
Output: -1
Explanation: x = 42 and y = 12. We return -1 as x and y don't exist in the array.
Input: arr[] = [10, 20, 30, 40, 50], x = 10, y = 50
Output: 4
Explanation: The distance between x = 10 (index 0) and y = 50 (index 4) is 4, which is the only distance between them.
Constraints:

1 ≤ arr.size() ≤ 105
0 ≤ arr[i], x, y ≤ 105
x != y


class Solution {
public:
    int minDist(vector<int>& arr, int x, int y) {
        int n = arr.size();

        int lastX = -1;
        int lastY = -1;
        int ans = INT_MAX;

        for (int i = 0; i < n; i++) {

            if (arr[i] == x) {
                lastX = i;
            }

            if (arr[i] == y) {
                lastY = i;
            }

            if (lastX != -1 && lastY != -1) {
                ans = min(ans, abs(lastX - lastY));
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
