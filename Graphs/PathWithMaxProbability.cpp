class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<double> dist(n,0);
        vector<vector<pair<int,double>>> graph(n);
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back({edges[i][1],succProb[i]});
            graph[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        priority_queue<pair<double,int>> pq;
        pq.push({1,start_node});
        dist[start_node] = 1;
        while(!pq.empty()){
            auto [prob,node] = pq.top();
            pq.pop();
            for(auto it:graph[node]){
                if(dist[it.first]<prob*it.second){
                    dist[it.first] = prob*it.second;
                    pq.push({dist[it.first],it.first});
                }
            }
        }
        return dist[end_node];
        
    }
};

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<double> dist(n,0);
        vector<vector<pair<int,double>>> graph(n);
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back({edges[i][1],succProb[i]});
            graph[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        priority_queue<pair<double,int>> pq;
        pq.push({1,start_node});
        dist[start_node] = 1;
        while(!pq.empty()){
            auto [prob,node] = pq.top();
            pq.pop();
            for(auto it:graph[node]){
                if(dist[it.first]<prob*it.second){
                    dist[it.first] = prob*it.second;
                    pq.push({dist[it.first],it.first});
                }
            }
        }
        return dist[end_node];
        
    }
};