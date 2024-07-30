#include <bits/stdc++.h>
using namespace std;




pair<int, int> dfs(int node, int par, vector<int> adj[], vector<int> &val)
{
    int a = val[node], b = val[node];
    vector<int> ch;
    for (auto child : adj[node])
    {
        if (child != par)
        {
            auto cur = dfs(child, node, adj, val);
            a = max(a, cur.first);
            b = max(b, cur.second + val[node]);
            ch.push_back(cur.second);
        }
    }
    sort(ch.begin(), ch.end(), greater<int>());
    if (ch.size() >= 2)
    {
        a = max(a, val[node] + ch[0] + ch[1]);
    }
    a = max(a, b);
    return {a, b};
}

int bestSumAnyTreePath(vector<int> parent, vector<int> value)
{
    int n = parent.size();
    vector<int> adj[n];
    for (int i = 1; i < n; ++i)
    {
        adj[i].push_back(parent[i]);
        adj[parent[i]].push_back(i);
    }
    return dfs(0, -1, adj, value).first;
}

int main(){

    vector<int> parent = {-1, 0, 0, 1, 1, 3, 3};
    vector<int> value = {1, 2, 3, 4, 5, 6, 7};
    cout<<bestSumAnyTreePath(parent, value);
    return 0;
}