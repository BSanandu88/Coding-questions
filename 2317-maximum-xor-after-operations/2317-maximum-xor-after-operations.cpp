class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int ans = 0;
        for(auto x : nums){
            int res = ans | x;
            ans = max(ans, res);
        }
        return ans;
    }
};