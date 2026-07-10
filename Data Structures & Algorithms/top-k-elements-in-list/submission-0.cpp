class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> Table;
        for (int i = 0; i < nums.size(); i++) Table[nums[i]]++;
        vector<pair<int, int>> SubArray;
        for (auto PhanTu : Table) SubArray.push_back({PhanTu.second, PhanTu.first});
        sort(SubArray.rbegin(), SubArray.rend());
        vector<int> Result;
        for (int i = 0; i < k; i++) {
            Result.push_back(SubArray[i].second);
        }
        return Result;
    }  
};
