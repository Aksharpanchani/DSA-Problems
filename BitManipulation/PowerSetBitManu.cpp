class Solution {
public:

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        int numSubsets = 1 << n; // 2^n subsets

        for (int i = 0; i < numSubsets; i++) {
            vector<int> subset;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) { // Check if the j-th bit is set
                    subset.push_back(nums[j]);
                }
            }
            res.push_back(subset);
        }
        return res;
    }
};