class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int target;
        int sum = 0;
        for(auto x:nums) sum+=x;
        int k=sum;
        vector<vector<int>> dp(nums.size()+1,vector<int>(sum+1,-1));
        bool taken[nums.size()];
        bool notTaken[nums.size()];
        for(int i=0;i<nums.size();i++){
            taken[i]=false;
            notTaken[i]=false;
        }
        for(int i=0;i<=nums.size();i++){
            for(int j=0;j<=sum;j++){
                if(j==0) dp[i][j]=0;
                else if(i==0) dp[i][j]=INT_MAX;
                else{
                    if(j>=nums[i-1]){
                        dp[i][j] = min(dp[i-1][j],dp[i-1][j-nums[i-1]]+nums[i-1]);
                    }
                    else dp[i][j] = dp[i-1][j];
                }
            }
        }
        for(int i=0;i<=sum/2;i++){
            if(dp[nums.size()][i]!=INT_MAX){
                target = i;
            }
        }
        return sum-2*target;    
        
    }
};