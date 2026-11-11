// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum > target) {
                right--;            // largest can't pair with anything
            } else if (sum < target) {
                left++;             // smallest can't pair with anything
            } else {
                return {left + 1, right + 1};   // convert to 1-indexed
            }
        }

        return {-1, -1};            // unreachable given the guarantee
    }
};
