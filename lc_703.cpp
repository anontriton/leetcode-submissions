// https://leetcode.com/problems/kth-largest-element-in-a-stream/

class KthLargest {
public:

    priority_queue<int, vector<int>, greater<int>> minHeap;
    int k;

    KthLargest(int k, vector<int>& nums) {
        this->k = k;

        for (int n : nums) {
            add(n);
        }
    }

    int add(int val) {
        if (minHeap.size() < k) {
            minHeap.push(val);
        } else {
            if (!minHeap.empty() && val > minHeap.top()) {
                minHeap.pop();
                minHeap.push(val);
            }
        }

        return minHeap.top();
    }
};
