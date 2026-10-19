void Try (int start_idx, int target, vector <int> &candidates, vector <int> &path, vector <vector<int>> &res) {
    if (target == 0) {
        res.push_back (path);
        return;
    }
    if (target < 0) return;
    for (int i=start_idx; i<candidates.size(); i++) {
        if (i>start_idx && candidates[i] == candidates[i-1]) continue;
        path.push_back (candidates[i]);
        Try (i+1, target - candidates[i], candidates, path, res);
        path.pop_back ();
    }
}

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort (candidates.begin(), candidates.end());
        vector <int> path;
        vector <vector<int>> res; 
        Try (0, target, candidates, path, res);
        return res;
    }
};
