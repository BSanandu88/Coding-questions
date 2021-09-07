/* Given a m * n matrix of distinct numbers, return all lucky numbers in the matrix in any order.

A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column. */
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> v;
        for(int i=0;i<matrix.size();i++){
            int row_min = INT_MAX,row_index = -1,col_max = INT_MIN;
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j] < row_min){
                row_min = matrix[i][j];
                row_index = j;
              }
            }
        
        for(int k=0;k<matrix.size();k++){
            if(matrix[k][row_index] > col_max){
                col_max = matrix[k][row_index];
            }
        }
            if(row_min == col_max){
                v.push_back(row_min);
            }
        }
        return v;
    }
};

// second approach 
// using unordered set

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> v;
        unordered_set<int>s;
        for(int i=0;i<matrix.size();i++){
            int rm = INT_MAX;
            for(int j=0;j<matrix[i].size();j++){
                rm = min(matrix[i][j],rm);
            }
            s.insert(rm);
        }
        for(int j=0;j<matrix[0].size();j++){
            int cm = INT_MIN;
            for(int i=0;i<matrix.size();i++){
                cm = max(matrix[i][j],cm);
            }
            if(s.find(cm) != s.end()){
                v.push_back(cm);
            }
        }
        return v;
        
    }
};