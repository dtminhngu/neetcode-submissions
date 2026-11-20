class Solution {
   public:
    int rob(vector<int>& nums) {
        // 1. dp[i]: maximum amount of money you can rob from house 0 -> house i
        int n = nums.size();
        vector<int> dp(n);
        if (n==1) return nums[0];
        // 2. Base case
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        // 3. Recursive formula
        for (int i = 2; i < n; i++) dp[i] = max(nums[i] + dp[i - 2], dp[i - 1]);
        return dp[n-1];
    }
};
