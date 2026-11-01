// https://leetcode.com/problems/kth-largest-element-in-an-array/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // min heap
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int n : nums) {
            if (minHeap.size() < k) {
                minHeap.push(n);
            } else if (n > minHeap.top()) {
                minHeap.push(n);
                minHeap.pop();
            }
        }

        return minHeap.top();
    }
};
