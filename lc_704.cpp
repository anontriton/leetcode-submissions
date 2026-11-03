// https://leetcode.com/problems/binary-search/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high = nums.size();
        int low = 0;

        while (low < high) {
            int mid = low + ((high - low) / 2);

            if (nums[mid] == target) { return mid; }

            if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return -1;
    }
};
