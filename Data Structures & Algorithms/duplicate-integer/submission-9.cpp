class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> str;
        for (int i=0; i<nums.size(); i++) {
            if (str.count (nums[i]) > 0) return true;
            str.insert (nums[i]);
        }
        return false;
    }
};