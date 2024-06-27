class Solution {
private:
    int helper(vector<int>& nums,int k) {
        int left=0,right=0,n=nums.size();
        unordered_map<int,int> mpp;
        int ans=0;
        while(right<n) {
            mpp[nums[right]]++;
            while(mpp.size() >k && left<=right) {
                mpp[nums[left]]--;
                if(mpp[nums[left]] == 0) {
                    mpp.erase(nums[left]);
                }
                left++;
            }
            ans += (right-left)+1;
            right++;
        }
        return ans;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
            return helper(nums,k) - helper(nums,k-1);
    }
};