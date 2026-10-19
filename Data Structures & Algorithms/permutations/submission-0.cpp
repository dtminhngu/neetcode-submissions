void Try (int i, vector <int> &nums, bool visited [100], vector <int> &path, vector <vector<int>> &res) {
    if (i==nums.size()) {
        res.push_back (path);
        return;
    }
    for (int j=0; j<nums.size(); j++) {
        if (!visited[j]) {
            path.push_back (nums[j]);
            visited [j] = true;
            Try (i+1,nums, visited, path, res);
            path.pop_back();
            visited [j] = false;
        }
    }
}

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        bool visited [100];
        vector <int> path;
        vector <vector<int>> res;
        Try(0, nums, visited, path, res);
        return res;
    }
};
