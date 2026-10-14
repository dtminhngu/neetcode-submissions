void Try (int start_idx, vector <int> &nums, vector <int> &path, vector <vector<int>> &res) {
    res.push_back (path);
    for (int i=start_idx; i<nums.size(); i++) {
        if (i>start_idx && nums[i] == nums[i-1]) continue;
        path.push_back (nums[i]);
        Try (i+1, nums, path, res);
        path.pop_back ();
    }
}

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        vector <int> path;
        vector <vector<int>> res;
        Try (0, nums, path, res);
        return res;
    }
};
