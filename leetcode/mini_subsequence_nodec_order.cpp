class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int tsum = accumulate(nums.begin(),nums.end(),0);
        int csum = 0;
        sort(nums.begin(),nums.end());
        vector<int> res;
        for(int i=nums.size() - 1 ;i >= 0;i--){
            if(csum <=  tsum){
                csum += nums[i];
                res.emplace_back(nums[i]);
            }
            tsum -= nums[i];
        }
        return res;
    }
};