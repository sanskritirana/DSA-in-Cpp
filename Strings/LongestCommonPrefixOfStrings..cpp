/*
Given an array of strings arr[]. Return the longest common prefix among each and every strings present in the array. If there's no prefix common in all the strings, return "".

Examples :

Input: arr[] = ["geeksforgeeks", "geeks", "geek", "geezer"]
Output: "gee"
Explanation: "gee" is the longest common prefix in all the given strings.
Input: arr[] = ["hello", "world"]
Output: ""
Explanation: There's no common prefix in the given strings.
Constraints:

1 ≤ |arr|, |arr[i]| ≤ 103
*/

class Solution {
public:
    string longestCommonPrefix(vector<string> arr) {
        string ans = "";

        for (int i = 0; i < arr[0].length(); i++) {
            char ch = arr[0][i];

            for (int j = 1; j < arr.size(); j++) {
                if (i >= arr[j].length() || arr[j][i] != ch)
                    return ans;
            }

            ans += ch;
        }

        return ans;
    }
};
