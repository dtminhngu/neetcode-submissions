class Solution {
   public:
    int minCostClimbingStairs(vector<int>& cost) {
        // def dp[i]: minimum cost to reach the i-th step
        int n = cost.size();
        vector<int> dp(n + 1);
        // Base case
        dp[0] = 0;
        dp[1] = 0;
        // Recursive formula
        for (int i = 2; i <= n; i++) dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        return dp[n];
    }
};
