class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        vector<int> hash(2, 0);
        int n = nums.size();
        int l = 0, r = 0, ans = 0;
        while(r < n){
            hash[nums[r]]++;
            if(hash[0] > k){
                hash[nums[l]]--;
                l++;
            }
            ans = max(ans, r-l+1);
            r++;
        }
        return ans;
    }
};