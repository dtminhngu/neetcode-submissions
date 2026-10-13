void Backtrack (int start_idx, vector <int> &nums, vector <int> &current_path, vector <vector<int>> &res) {
    res.push_back (current_path);
    for (int i = start_idx; i<nums.size(); i++) {
        current_path.push_back (nums[i]);
        Backtrack (i+1, nums, current_path, res);
        current_path.pop_back ();
    }
}

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> current_path;
        vector <vector<int>> res; 
        Backtrack (0, nums, current_path, res);
        return res;
    }
};
