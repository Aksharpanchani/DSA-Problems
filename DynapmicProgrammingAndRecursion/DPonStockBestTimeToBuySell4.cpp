class Solution {
public:

    int sol(int ind,int buy, int cap, vector<int> &prices, int n,vector<vector<vector<int>>> &dp){
        if(ind==n || cap==0) return 0;
        if(dp[ind][buy][cap]!=-1) return dp[ind][buy][cap];
        if(buy==1){
            return dp[ind][buy][cap] = max(-prices[ind] + sol(ind+1,0,cap,prices,n,dp), 0 + sol(ind+1,1,cap,prices,n,dp));
        }
        return dp[ind][buy][cap] = max(prices[ind]+sol(ind+1,1,cap-1,prices,n,dp),0+sol(ind+1,0,cap,prices,n,dp));
    };
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>> (2,vector<int> (k+1,-1))); 
        return sol(0,1,k,prices,n,dp);
    }
};