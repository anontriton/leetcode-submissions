// https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        int b = 0;
        int e = s.size() - 1;
        while (b < e) {
            if (!isalnum(s[b])) {
                b++;
                continue;
            } else if (!isalnum(s[e])) {
                e--;
                continue;
            } else if (tolower(s[b]) != tolower(s[e])) {
                return false;
            }
            b++;
            e--;
        }
        return true;
    }
};
