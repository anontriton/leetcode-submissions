// https://leetcode.com/problems/is-subsequence/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int seen = 0;

        if (s.empty()) return true;
        if (s == t) return true;

        for (char c : t) {
            if (c == s[seen]) {
                seen++;
            }
        }

        if (seen == s.length()) return true;
        else return false;
    }
};
