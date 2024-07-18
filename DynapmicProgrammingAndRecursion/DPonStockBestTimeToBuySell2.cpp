class Solution {
public:
    int sol(int ind,int buy, vector<int> prices, int n,vector<vector<int>> &dp){
        if(ind ==n) return 0;
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        long profit=0;
        if(buy){
            profit=max(-prices[ind]+sol(ind+1,0,prices,n,dp),0+sol(ind+1,1,prices,n,dp));
        }
        else{
            profit=max(prices[ind]+sol(ind+1,1,prices,n,dp),0+sol(ind+1,0,prices,n,dp));
        }
        return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int> (2,-1));
        return sol(0,1,prices,n,dp);
    }
};

//-----------Optimal---------
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<long>> dp(n + 1, vector<long>(2, -1));

        dp[n][0] = dp[n][1] = 0;

        long profit;

        for (int ind = n - 1; ind >= 0; ind--) {
            for (int buy = 0; buy <= 1; buy++) {
                if (buy == 0) {
                    profit =
                        max(0 + dp[ind + 1][0], -prices[ind] + dp[ind + 1][1]);
                }

                if (buy == 1) {
                    profit =
                        max(0 + dp[ind + 1][1], prices[ind] + dp[ind + 1][0]);
                }

                dp[ind][buy] = profit;
            }
        }
        return dp[0][0];
    }
};