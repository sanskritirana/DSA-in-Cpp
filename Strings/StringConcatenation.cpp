/*
You are given two strings s1 and s2 and your task is to concatenate both in s1 and print the final string.

Note: You may assume s1 will always have extra spaces to concatenate s2.

Examples:

Input: s1 = "Hello", s2 = "World"
Output: HelloWorld
Input: s1 = "abc", s2 = "def"
Output: abcdef
Constraints:

1 ≤ s1.size(), s2.size() ≤ 103
*/

class Solution {
  public:
    void concat(string& s1, string& s2) {
        cout<< s1 + s2 <<endl;
    }
};
