class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // brute force
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size();j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }
        return false;
        // binary search 
		// int n = matrix.size();
		// int m = matrix[0].size();
		// if(n == 0 || m == 0)
		// return false;
		// // treating matrix as array just taking care of endices
		// // [0..n*m]
		// int start = 0, end = m*n - 1;
		// while(start <= end)
		// {
		// int mid = start + (end - start) / 2;
		// 	// a[x] : matrix[x / m][x % m] formulae
		// int ind = matrix[mid/m][mid%m];
		// if (target == ind)
		// return true;
		// 	// left half
		// else if(target < ind)
		// end = mid - 1;
		// else
		// 	// right half
		// start = mid + 1;       
		// }
		// return false;
    }
};