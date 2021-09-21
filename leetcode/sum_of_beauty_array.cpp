// You are given a 0-indexed integer array nums. For each index i (1 <= i <= nums.length - 2) the beauty of nums[i] equals:

// 2, if nums[j] < nums[i] < nums[k], for all 0 <= j < i and for all i < k <= nums.length - 1.
// 1, if nums[i - 1] < nums[i] < nums[i + 1], and the previous condition is not satisfied.
// 0, if none of the previous conditions holds.
// Return the sum of beauty of all nums[i] where 1 <= i <= nums.length - 2.
class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        left[0] = nums[0];
        right[n-1] = nums[n-1];

        for(int i=1;i<n;i++){
            left[i] = max(left[i-1],nums[i]);
        }
        for(int i=n-2;i>=0;i--){
            right[i] = min(nums[i],right[i+1]);
        }
        int count = 0;
        for(int i=1;i<n-1;i++){
            if(left[i-1] < nums[i] and nums[i] < right[i+1]){
                count += 2;
            }else if(nums[i-1] < nums[i] and nums[i] < nums[i+1]){
                count += 1;
            }
        }
        return count;
    }
};