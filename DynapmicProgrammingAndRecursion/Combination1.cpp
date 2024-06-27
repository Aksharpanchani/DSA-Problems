class Solution {
public:

    void find(int indx,vector<int> &candidates, int target, vector<int> &ds, vector<vector<int>> &ans){
        if(indx==candidates.size())
        {
            if(target==0)
            ans.push_back(ds);

            return;
        }
        if(candidates[indx]<=target){
        ds.push_back(candidates[indx]);
        find(indx,candidates,target-candidates[indx],ds,ans);
        ds.pop_back();
        }
        find(indx+1,candidates,target,ds,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
       // sort(candidates.begin(),candidates.end());
        find(0,candidates,target,ds,ans);
        return ans;
    }
};