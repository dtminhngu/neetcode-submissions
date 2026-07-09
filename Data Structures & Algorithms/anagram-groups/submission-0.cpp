class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> Nhom;
        for (int i = 0; i < strs.size(); i++) {
            string key = strs[i];
            sort(key.begin(), key.end());
            Nhom [key].push_back(strs[i]);
        }
        vector <vector<string>> KetQua;
        for (auto PhanTu : Nhom) {
            KetQua.push_back (PhanTu.second);
        }
        return KetQua;
    }
};
