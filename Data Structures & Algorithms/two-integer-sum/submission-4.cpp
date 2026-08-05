class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> note;
        for (int i=0; i<nums.size(); i++) {
            int dif = target - nums[i];
            if (note.count (dif) > 0) return {note[dif], i};
            note[nums[i]] = i;
        }
        return {};
    }
};
