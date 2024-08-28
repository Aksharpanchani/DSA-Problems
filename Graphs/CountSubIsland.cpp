class Solution {
public:
    bool dfs(int i,int j,vector<vector<int>>& grid1,vector<vector<int>>& grid2){
        if(i<0 || j<0 || i>=grid2.size() || j>=grid2[0].size() || grid2[i][j]==0) return true;
        grid2[i][j]=0;
        bool res = true;
        if(grid1[i][j]==0) res = false;
        res &= dfs(i+1,j,grid1,grid2);
        res &= dfs(i-1,j,grid1,grid2);
        res &= dfs(i,j+1,grid1,grid2);
        res &= dfs(i,j-1,grid1,grid2);
        return res;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int count=0;
        for(int i=0;i<grid2.size();i++){
            for(int j=0;j<grid2[0].size();j++){
                if(grid2[i][j]==1){
                    if(dfs(i,j,grid1,grid2)) count++;
                }
            }
        }
        return count;
    }
};