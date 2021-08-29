/* Given a square matrix mat, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

 
  */
 class Solution {
     public:
        int diagonalSum(vector<vector<int>>& mat){
            int sum = 0;
            int start = 0;
            int end = mat.size() - 1;
            for(int i=0;i<mat.size();i++){
                if(start != end){
                    sum += mat[i][start] + mat[i][end];
                }else{
                    sum += mat[i][start];
                }
                start += 1;
                end -= 1;
            }
        return sum;
        }
 };