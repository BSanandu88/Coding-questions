class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int res = 1, mn = nums[0], mx = nums[0];
        for(int i = 0; i < nums.size(); i++){
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
            if(mx - mn > k){
                mx = mn = nums[i]; res++;
            }
        }
        return res;
    }
};