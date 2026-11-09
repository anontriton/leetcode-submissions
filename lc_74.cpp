// https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0;
        int m = matrix.size();      // number of rows
        int n = matrix[0].size();   // number of columns (row length)
        int right = m * n;          // half-open: [left, right)

        while (left < right) {
            int mid = left + ((right - left) / 2);
            int row = mid / n;      // how many full rows come before mid
            int col = mid % n;      // how far into that row

            if (matrix[row][col] == target) { return true; }

            if (matrix[row][col] < target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return false;
    }
};
