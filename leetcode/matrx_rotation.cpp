/* Given two n x n binary matrices mat and target, return true if it is possible to make mat equal to target by rotating mat in 90-degree increments, or false otherwise.

 

Example 1:


Input: mat = [[0,1],[1,0]], target = [[1,0],[0,1]]
Output: true
Explanation: We can rotate mat 90 degrees clockwise to make mat equal target. */

class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat == target) return true; // zero degree rotation
        int n = mat.size();
        int count = 3;
        while(count--){
            for(int i=0;i<n;i++){
                for(int j=i;j<n;j++){
                    swap(mat[i][j],mat[j][i]); // transpose 
                }
            }
            for(int i=0;i<n;i++){
                reverse(mat[i].begin(),mat[i].end());
            }
            if ( mat == target) return true;
        }
        return false;
    }
};