class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int count = 1;
        int left = 0, right = n - 1, top = 0, bottom = n - 1;
        while(left <= right and top <= bottom){
            for(int i = left; i <= right; i++){
                ans[top][i] = count;
                count++;
            }
            top++;
            for(int i = top; i <= bottom; i++){
                ans[i][right] = count;
                count++;
            }
            right--;
            for(int i = right; i >= left; i--){
                ans[bottom][i] = count;
                count++;
            }
            bottom--;
            for(int i = bottom; i >= top; i--){
                ans[i][left] = count;
                count++;
            }
            left++;
        }
        return ans;
    }
};