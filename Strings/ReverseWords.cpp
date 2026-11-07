/*
Given a string s, reverse the string without reversing its individual words. Words are separated by dots(.).

The string may contain leading or trailing dots(.) or multiple dots(.) between two words.
The returned string should only have a single dot(.) separating the words and no extra dots should be included.
Examples :

Input: s = "i.like.this.program.very.much"
Output: "much.very.program.this.like.i"
Explanation: The words in the input string are reversed while maintaining the dots as separators, resulting in "much.very.program.this.like.i".
Input: s = "..geeks..for.geeks."
Output: "geeks.for.geeks"
Explanation: After removing extra dots and reversing the whole string, the input string becomes "geeks.for.geeks".
Input: s = "..home....."
Output: "home"
Explanation: The input string contains only one word with extra dots around it. After removing the extra dots, the output is "home".
Constraints:

1 ≤ s.size() ≤ 106
s consists of lowercase English alphabets and the character .
*/

class Solution {
  public:
    string reverseWords(string &s) {
        stringstream ss(s);
        string word, ans = "";
        vector<string> v;

        while (getline(ss, word, '.')) {
            if (word != "") {
                v.push_back(word);
            }
        }

        reverse(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++) {
            if (i > 0) ans += ".";
            ans += v[i];
        }

        return ans;
    }
};
