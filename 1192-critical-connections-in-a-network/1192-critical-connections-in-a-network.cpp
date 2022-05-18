class Solution {
    
private:
    void tarjan(int curr, int parent, int time, vector<vector<int>> &adj, vector<int> &low, vector<vector<int>> &ans){
        low[curr] = time++;
        for(auto x : adj[curr]){
            if(x == parent){
                continue;
            }
            if(low[x] == 0) tarjan(x, curr, time, adj, low, ans);
            low[curr] = min(low[curr], low[x]);
            if(low[x] == time){
                ans.push_back({curr, x});
            }
        }
    }
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adj(n);
        for (auto x: connections){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<vector<int>> ans;
        vector<int> low(n);
        tarjan(0, -1, 1, adj, low, ans);
        return ans;
    }
};