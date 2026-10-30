// https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // hash map and bucket sort
        vector<int> answer;
        unordered_map<int, int> seen;
        int x = nums.size() + 1;
        vector<vector<int>> bucket(x);

        for (int n : nums) {
            seen[n]++;
        }

        for (const auto& [n, freq] : seen) {
            bucket[freq].push_back(n);
        }

        for (int i = nums.size(); i >= 1; i--) {
            if (bucket[i].empty()) {
                continue;
            } else if (answer.size() >= k) {
                break;
            }

            for (int n : bucket[i]) {
                answer.push_back(n);
            }

        }
        return answer;
    }
};
