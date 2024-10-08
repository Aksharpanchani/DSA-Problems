class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n, 0);
        dp[0] = 1;
        
        int i2 = 0, i3 = 0, i5 = 0;
        for (int i = 1; i < n; ++i) {
            dp[i] = min({dp[i2] * 2, dp[i3] * 3, dp[i5] * 5});
            
            if (dp[i] == dp[i2] * 2) {
                ++i2;
            }
            if (dp[i] == dp[i3] * 3) {
                ++i3;
            }
            if (dp[i] == dp[i5] * 5) {
                ++i5;
            }
        }
        
        return dp[n - 1];
    }
};

// Time complexity is O(n).
//Space complexity is O(n).