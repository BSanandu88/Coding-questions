class Solution {
public:
    vector<vector<int>> ans;
    void func(vector<int> &cur, int num, int k, int n){
        if(n < 0 or cur.size() > k){
            return;
        }
         if(n == 0 && cur.size() == k) {
            ans.push_back(cur);
            return;
        }
        
        for(int i=num; i<=9; ++i) {
            cur.push_back(i);
            func(cur, i+1, k, n-i);
            cur.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> curr;
        func(curr, 1, k, n);
        return ans;
    }
};