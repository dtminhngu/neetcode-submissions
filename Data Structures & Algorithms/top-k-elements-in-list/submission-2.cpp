class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> table;
        for (int i = 0; i < nums.size(); i++) table[nums[i]]++;
        vector<vector<int>> buckets(nums.size() + 1);
        for (auto &PhanTu : table) {
            int number = PhanTu.first;
            int freq = PhanTu.second;
            buckets[freq].push_back(number);
        }
        vector<int> result;
        for (int i = buckets.size() - 1; i >= 0; i--) {
            for (int j = 0; j < buckets[i].size(); j++) {
                result.push_back(buckets[i][j]);
                if (result.size() == k) return result;
            }
        }
        return result;
    }
};
