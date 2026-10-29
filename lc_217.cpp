// https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int n : nums) {
            if (seen.contains(n)) {
                return true;
            } else {
                seen.insert(n);
            }
        }
        return false;
    }
};
