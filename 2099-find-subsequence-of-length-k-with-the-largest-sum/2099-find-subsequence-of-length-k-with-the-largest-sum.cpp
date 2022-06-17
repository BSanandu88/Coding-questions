class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size(), i = 0, t = k;
        vector<int> ans;
        while(t > 0){
            ans.emplace_back(nums[i]);
            i++;
            t--;
        }
        for(int j = i; j < n; j++){
            int minind = min_element(ans.begin(), ans.end()) - ans.begin();
            if(ans[minind] < nums[j]){
                ans.erase(ans.begin() + minind);
                ans.emplace_back(nums[j]);
            }
        }
        return ans;
    }
};