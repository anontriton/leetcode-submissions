// https://leetcode.com/problems/two-sum/

class Solution {
public:

	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> seen;
		
		for (int i = 0; i < nums.size(); i++) {
			int remainder = target - nums[i];
			
			if (seen.find(remainder) != seen.end()) {
				return {seen[remainder], i};
			}
		seen[nums[i]] = i;
		}
	}
};
