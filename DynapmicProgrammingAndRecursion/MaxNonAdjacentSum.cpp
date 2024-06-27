class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev2=0;
        int prev=nums[0];
        for(int i=1;i<n;i++){
            int Take =nums[i];
            if(i>1)
            Take += prev2;
            int notTake= 0 +prev;
            int current=max(Take,notTake);
            prev2=prev;
            prev=current;
        }
        return prev;
    }
};