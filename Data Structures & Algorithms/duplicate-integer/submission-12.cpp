class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> note;
        for (int i=0; i<nums.size(); i++) {
            if (note.count (nums[i]) > 0) return true;
            note.insert (nums [i]);
        }
        return false;
    }
};