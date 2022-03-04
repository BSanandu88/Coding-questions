class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& p) {
        int n = p.size();
        int xdiff = p[1][0] - p[0][0]; // (x1 - x0)
        int ydiff = p[1][1] - p[0][1]; // (y1 - y0)
        for(int i = 2; i < n; i++) {
            int x1 = p[i][0] - p[0][0]; // (x - x0)
            int y1 = p[i][1] - p[0][1]; // (y - y0)
            if(x1 * ydiff != y1 * xdiff) return false; 
        }

        return true;
    }
};