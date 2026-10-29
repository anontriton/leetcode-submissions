// https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        int freq[26] = {};

        for (char c : t) {
            ++freq[c - 'a'];
        }

        for (char c : s) {
            if (freq[c - 'a'] == 0) {
                return false;
            }
            --freq[c - 'a'];
        }

        return true;
    }
};
