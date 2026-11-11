/*
Given an integer array arr[] and a 2D array queries[][], where each query consists of two indices [left, right], defining a range in the array (inclusive).

For each query, find the maximum prefix sum within the given range arr[left..right].

Examples:

Input: arr[] = [-1, 2, 3, -5], queries[][] = [[0, 3], [1, 3]]
Output:[4, 5]
Explanation: For the range [0, 3], the prefix sums are [-1, 1, 4, -1]. The maximum is 4.
For the range [1, 3], the prefix sums are [2, 5, 0]. The maximum is 5.
Input: arr[] = [1, -2, 3, 4, -5], queries[][] = [[0, 4], [2, 3], [1, 3]]
Output: [6, 7, 5]
Explanation: For the range [0, 4], the prefix sums are [1, -1, 2, 6, 1]. The maximum is 6. 
For the range [2, 3], the prefix sums are [3, 7]. The maximum is 7. 
For the range [1, 3], the prefix sums are [-2, 1, 5]. The maximum is 5.
Constraints:

1 ≤ arr.size() ≤ 105
-104 ≤ arr[i] ≤ 104
1 ≤ queries.size() ≤ 104
queries[i].size() = 2
*/

class Solution {
    struct Node {
        long long sum, pref;
    };

    vector<Node> tree;

    Node merge(Node a, Node b) {
        Node res;
        res.sum = a.sum + b.sum;
        res.pref = max(a.pref, a.sum + b.pref);
        return res;
    }

    void build(int idx, int l, int r, vector<int>& arr) {
        if (l == r) {
            tree[idx] = {arr[l], arr[l]};
            return;
        }

        int mid = (l + r) / 2;

        build(2 * idx, l, mid, arr);
        build(2 * idx + 1, mid + 1, r, arr);

        tree[idx] = merge(tree[2 * idx], tree[2 * idx + 1]);
    }

    Node query(int idx, int l, int r, int ql, int qr) {
        if (l == ql && r == qr)
            return tree[idx];

        int mid = (l + r) / 2;

        if (qr <= mid)
            return query(2 * idx, l, mid, ql, qr);

        if (ql > mid)
            return query(2 * idx + 1, mid + 1, r, ql, qr);

        Node left = query(2 * idx, l, mid, ql, mid);
        Node right = query(2 * idx + 1, mid + 1, r, mid + 1, qr);

        return merge(left, right);
    }

public:
    vector<int> maxPrefixSumQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();

        tree.resize(4 * n);

        build(1, 0, n - 1, arr);

        vector<int> ans;

        for (auto &q : queries) {
            Node res = query(1, 0, n - 1, q[0], q[1]);
            ans.push_back((int)res.pref);
        }

        return ans;
    }
};
