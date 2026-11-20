class Solution {
   public:
    int climbStairs(int n) {
        if (n <= 2) return n;  // With n<=2, number of ways = n; tackle out of bound bug
        // 1. Def of dp[i]: number of distinct ways to climb to top of the staircase
        vector<int> dp(n + 1);
        // 2. Base case
        dp[1] = 1;  // 1->1
        dp[2] = 2;  // 1+1->2; 2->2

        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};
