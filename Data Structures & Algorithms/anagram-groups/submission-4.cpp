class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> note;
        for (int i=0; i<strs.size(); i++) {
            string key = strs[i];
            sort (key.begin(), key.end());
            note [key].push_back (strs[i]);
        }
        vector <vector<string>> res;
        for (auto &phantu : note) {
            res.push_back (phantu.second);
        }
        return res;
    }
};
