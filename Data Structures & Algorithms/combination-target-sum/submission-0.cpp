void Backtrack (int start_idx, int target, vector <int> &nums, vector <int> &path, vector <vector<int>> &res) {
    if (target == 0) {
        res.push_back (path);
        return;
    }
    if (target < 0) return;
    for (int i=start_idx; i<nums.size(); i++) {
        path.push_back (nums[i]);
        Backtrack (i, target-nums[i], nums, path, res);
        path.pop_back ();
    }
}

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector <int> path;
        vector <vector<int>> res;
        Backtrack (0, target, nums, path, res);
        return res;
    }
};
