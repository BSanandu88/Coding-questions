class Solution {
public:
     vector<vector<int>> dirs = {
            {-1,0},
    {0,-1},        {0,1},
            {1,0}
    };
    int dfs(vector<vector<int>> &matrix, int r, int c, vector<vector<int>> &dp, int prev)        {
        if(r<0 || r>=matrix.size() || c<0 || c>=matrix[0].size()) return 0;
        if(matrix[r][c] <= prev) return 0;
        if(dp[r][c] != -1) return dp[r][c];
        int best = 0; //store best path length
        //moving in all 4 directions and call dfs function
        for(auto dir : dirs) {
            int next_r = dir[0] + r;
            int next_c = dir[1] + c;
            int cur = dfs(matrix, next_r, next_c, dp, matrix[r][c]);
            best = max(best, cur); //store max. path length
        }
        
        return dp[r][c] = best + 1;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        vector<vector<int>> dp(row, vector<int> (col, -1));
        int lp = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                int path = dfs(matrix, i, j, dp, -1000000);
                lp = max(lp, path);
            }
        }
        return lp;
    }
};