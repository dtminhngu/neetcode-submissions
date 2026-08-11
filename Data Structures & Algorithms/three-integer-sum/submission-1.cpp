class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int L = i + 1, R = nums.size() - 1;
            while (L < R) {
                int sum = nums[L] + nums[R] + nums[i];
                if (sum == 0) {
                    res.push_back({nums[L], nums[R], nums[i]});
                    L++;
                    R--;
                    while (L < R && nums[L] == nums[L - 1]) L++;
                } else if (sum > 0)
                    R--;
                else
                    L++;
            }
        }
        return res;
    }
};
