#include <vector>
class Solution {
public:

    void findsubset(int indx, vector<int> &ds, vector<int> &nums,vector<vector<int>> &ans)
    {
        ans.push_back(ds);
        for(int i=indx;i<nums.size();i++)
        {
            if(i!=indx && nums[i]==nums[i-1])
            continue ;

            ds.push_back(nums[i]);
            findsubset(i+1,ds,nums,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        findsubset(0,ds,nums,ans);
        return ans;
    }
};