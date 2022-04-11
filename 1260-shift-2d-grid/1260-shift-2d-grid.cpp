class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
       int n = grid.size(), m = grid[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        for(int i = 0; i < n*m; i++){
             int temp = (i+k)%(n*m);
             ans[temp/m][temp%m] = grid[i/m][i%m];
        }
        return ans;
    }
};