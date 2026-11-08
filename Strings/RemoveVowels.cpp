/*
Given a string s. Your task is to remove the vowels from the string.

Examples:

Input: s = "welcome to geeksforgeeks"
Output: "wlcm t gksfrgks"
Explanation: Vowels were ignored only consonents were returned in the same order.
Input: s = "what is your name ?"
Output: wht s yr nm ?
Constraints:
1 <= |s| <= 105
Alphabets are lower cases only
*/

class Solution {
public:
    string removeVowels(string& s) {
        string ans = "";

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch != 'a' && ch != 'e' && ch != 'i' &&
                ch != 'o' && ch != 'u' && ch != 'A' &&
                ch != 'E' && ch != 'I' && ch != 'O' &&
                ch != 'U') {

                ans += ch;
            }
        }

        return ans;
    }
};
