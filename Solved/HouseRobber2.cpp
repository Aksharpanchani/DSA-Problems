class Solution {
public:
    long long int take(vector<int>& nums) {
        int n = nums.size();
        long long int prev2 = 0;
        long long int prev = nums[0];
        for (int i = 1; i < n; i++) {
            long long int Take = nums[i];
            if (i > 1)
                Take += prev2;
            long long int notTake = 0 + prev;
            long long int current = max(Take, notTake);
            prev2 = prev;
            prev = current;
        }
        return prev;
    }
   long long int rob(vector<int>& nums) {
        vector<int> a1;
        vector<int> a2;
        int n = nums.size();
        if (n == 1)
            return nums[0];
        for (int i = 0; i < n; i++) {
            if (i != 0)
                a1.push_back(nums[i]);
            if (i != n - 1)
                a2.push_back(nums[i]);
        }
        long long int ans1 = take(a1);
        long long int ans2 = take(a2);

        return max(ans1, ans2);
    }
};