class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count = 0;
        int left = 0;
        int right = nums.size() - 1;
        while(left <  right and nums[left] < k){
            if(nums[left] + nums[right] < k){
                left += 1;
            }else if(nums[left] + nums[right] > k){
                right -= 1;
            }else{
                left += 1;
                right -= 1;
                count += 1;
            }
        }
        return count;
    }
};