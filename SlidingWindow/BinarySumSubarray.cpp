class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int l = 0, r = 0, ans = 0, sum = 0;
        unordered_map<int, int> hash;
        while(r < n){
            sum += nums[r];
            if(sum == goal){
                ans++;
            }
            if(hash.find(sum-goal) != hash.end()){
                ans += hash[sum-goal];
            }
            hash[sum]++;
            r++;
        }
        return ans;
    }
};