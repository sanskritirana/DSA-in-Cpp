/*
Given two integers n and d. Return an array containing all the numbers between 0 to n that contain the specific digit d.

Examples:

Input: n = 20, d = 5
Output: [5, 15]
Explanation: For number till 20, 5 appears in 5 itself and 15.
Input: n = 50, d = 2
Output: [2, 12, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 32, 42]
Explanation: For number till 50, 2 appears in all these numbers.
Constraints:
0 ≤ n ≤ 103
0 ≤ d ≤ 9
*/

vector<int> solve(int n, int d) {
    
    if (n < 0) return {};
    
    vector<int> v;

    for (int i = 0; i <= n; i++) {

        if (i == 0) {
            if (d == 0) v.push_back(0);
            continue;
        }

        for (int j = i; j != 0; j = j / 10)
        {
            int digit = j % 10;

            if (digit == d) {
                v.push_back(i);
                break;
            }
        }
    }
    
    if (v.empty()) return {-1};
    
    return v;
}
