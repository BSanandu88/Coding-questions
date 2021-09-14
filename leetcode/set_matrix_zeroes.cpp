// brute force
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int flag = -100000;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    int row = i, col = j;
                    for(int k=0; k<n; k++){
                        if(matrix[k][col] != 0){
                            matrix[k][col] = flag;
                        }
                    }
                    for(int k=0; k<m; k++){
                        if(matrix[row][k] != 0){
                            matrix[row][k] = flag;
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == flag){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

// hashing
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(),m = matrix[0].size();
        vector<int> a(n,-1),b(m,-1);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    a[i] = 0;
                    b[j] = 0;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i] == 0 or b[j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
};