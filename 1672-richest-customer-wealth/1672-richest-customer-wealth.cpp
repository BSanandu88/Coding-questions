class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_count = 0;
        for(auto &x : accounts){
            int cur_count = 0;
            for(int i = 0;i<x.size();i++){
                cur_count += x[i];
            }
            max_count = max(cur_count,max_count);
        }
        return max_count;
    }
};