/*
Given a string s, composed of different combinations of '(' , ')', '{', '}', '[', ']'. Determine whether the Expression is balanced or not.
An expression is balanced if:

Each opening bracket has a corresponding closing bracket of the same type.
Opening brackets must be closed in the correct order.
Examples :

Input: s = "[{()}]"
Output: true
Explanation: All the brackets are well-formed.
Input: s = "[()()]{}"
Output: true
Explanation: All the brackets are well-formed.
Input: s = "([]"
Output: false
Explanation: The expression is not balanced as there is a missing ')' at the end.
Input: s = "([{]})"
Output: false
Explanation: The expression is not balanced as there is a closing ']' before the closing '}'.
Constraints:

1 ≤ s.size() ≤ 106
s[i] = [ ] { } ( )
*/

class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else {
                if (st.empty()) {
                    return false;
                }

                if ((s[i] == ')' && st.top() != '(') ||
                    (s[i] == '}' && st.top() != '{') ||
                    (s[i] == ']' && st.top() != '[')) {
                    return false;
                }

                st.pop();
            }
        }

        return st.empty();
    }
};
