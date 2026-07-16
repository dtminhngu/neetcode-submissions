class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> table;
        for (int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];
            if (table.count(difference) > 0) return {table[difference], i};
            table [nums[i]] = i;
        }
        return{};
    }
};
