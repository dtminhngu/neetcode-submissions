class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> table;
        for (int i=0; i<nums.size(); i++) {
            int complement = target - nums[i];
            if (table.count(complement) > 0) return {table[complement], i};
            table [nums[i]] = i;
        }
        return {};
    }
};
