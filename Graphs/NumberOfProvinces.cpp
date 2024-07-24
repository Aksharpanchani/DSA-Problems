class Solution {
public:
    void dfs(int node, vector<int> adj[], vector<int> &vis){ // can also write int vis[]
        vis[node]=1;
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> adj[n];
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected.size();j++){
                if(isConnected[i][j]==1&& i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int> vis(n,0);
        // int vis[n];
        // for(int i=0;i<n;i++){
        //     vis[i]=0;
        // }
        int count=0;
        for(int i=0;i<isConnected.size();i++){
            if(!vis[i]){
                count++;
                dfs(i,adj,vis);
            }
        }
        return count;
    }
};