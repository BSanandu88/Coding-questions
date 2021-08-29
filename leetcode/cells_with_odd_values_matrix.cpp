/* There is an m x n matrix that is initialized to all 0's. There is also a 2D array indices where each indices[i] = [ri, ci] represents a 0-indexed location to perform some increment operations on the matrix.

For each location indices[i], do both of the following:

Increment all the cells on row ri.
Increment all the cells on column ci.
Given m, n, and indices, return the number of odd-valued cells in the matrix after applying the increment to all locations in indices. */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>>ans(m,vector<int>(n,0));
        int count = 0;
        for(int i=0;i<indices.size();i++){
            for(int j=0;j<n;j++){
                ans[indices[i][0]][j]++;
            }
            for(int j=0;j<m;j++){
                ans[j][indices[i][1]]++;
            }
        }
        for(auto x : ans){
            for(auto j : x){
                if(j%2 == 1)count++;
            }
        }
        return count;
    }
};

int main(){
    int m,n;
    cin >> m >> n;
    vector<vector<int>> indices;
    for(int i=0;i<2;i++){
        vector<int>v;
        for(int j=0;j<2;j++){
            int num;
            cin >> num;
            v.push_back(num);
        }
        indices.push_back(v);
    }

    Solution s;
    int val = s.oddCells(m,n,indices);
    cout << val <<endl;
    return 0;
}