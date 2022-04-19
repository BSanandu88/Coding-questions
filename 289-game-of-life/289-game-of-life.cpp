class Solution {
public:
    int get(vector<vector<int>> &curr, int i, int j, int m, int n){
        int liveNeighbours = 0;
        if(i>0) {
            //check the upper neighbour
            if(curr[i-1][j] == 1) liveNeighbours++;
        }
        if(i<m-1) {
            //check the lower neighbour
            if(curr[i+1][j] == 1) liveNeighbours++;
        }
        if(j>0) {
            //check the left neighbour
            if(curr[i][j-1] == 1) liveNeighbours++;
        }
        if(j<n-1) {
            //check the right neighbour
            if(curr[i][j+1] == 1) liveNeighbours++;
        }

        if(i>0 && j>0) {
            if(curr[i-1][j-1] == 1) liveNeighbours++;
        }
        if(i>0 && j<n-1) {
            if(curr[i-1][j+1] == 1) liveNeighbours++;
        }
        if(i<m-1 && j>0) {
            if(curr[i+1][j-1] == 1) liveNeighbours++;
        }
        if(i<m-1 && j<n-1) {
            if(curr[i+1][j+1] == 1) liveNeighbours++;
        }
        return liveNeighbours;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> curr = board;
        int m = board.size();
        int n = board[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int val = get(curr, i, j, m, n);
                if(board[i][j] == 0){
                    if(val == 3){
                        board[i][j] = 1;
                    }
                }
                else if(board[i][j] == 1){
                    if(val < 2 or val > 3){
                        board[i][j] = 0;
                    }
                }
            }
        }
    }
};