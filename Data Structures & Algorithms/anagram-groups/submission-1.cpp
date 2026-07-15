class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> storage;
        for (int i = 0; i < strs.size(); i++) {
            string key = strs[i];
            sort (key.begin(), key.end());
            storage[key].push_back(strs[i]);
        }
        vector <vector<string>> result;
        for (const auto &PhanTu : storage) result.push_back (PhanTu.second);
        return result;
    }
};
