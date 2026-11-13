// https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;          // last unplaced value in nums1
        int j = n - 1;          // last unplaced value in nums2
        int k = m + n - 1;      // next write slot in nums1

        while (j >= 0) {
            if (i < 0 || nums2[j] >= nums1[i]) {
                nums1[k] = nums2[j];
                j--;
                k--;
            } else {
                nums1[k] = nums1[i];
                i--;
                k--;
            }
        }
    }
};
