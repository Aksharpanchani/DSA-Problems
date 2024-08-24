class Solution {
public:
    bool dfs(int color,int node,vector<vector<int>>& graph,int col[]){
        if(col[node]!=-1){
            return col[node]==color;
        }
        col[node] = color;
        for(auto it:graph[node]){
            if(dfs(1-color,it,graph,col)==false) return false;
        }
        return true;
        
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int col[graph.size()];
        for(int i=0;i<graph.size();i++) col[i] = -1;

        for(int i=0;i<graph.size();i++){
            if(col[i]==-1){
                if(dfs(0,i,graph,col)==false) return false;
            }
        }
        return true;
    }
};