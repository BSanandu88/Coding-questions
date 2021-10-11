/* Given an array of positive integers nums, return the maximum possible sum of an ascending subarray in nums.

A subarray is defined as a contiguous sequence of numbers in an array.

A subarray [numsl, numsl+1, ..., numsr-1, numsr] is ascending if for all i where l <= i < r, numsi < numsi+1. Note that a subarray of size 1 is ascending.

 

Example 1:

Input: nums = [10,20,30,5,10,50]
Output: 65
Explanation: [5,10,50] is the ascending subarray with the maximum sum of 65. */
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max_sum = nums[0];
        int curr_sum = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i] > nums[i - 1]){
                curr_sum += nums[i];
            }else{
                curr_sum = nums[i];
            }
            max_sum = max(curr_sum,max_sum);
        }
        return max_sum;
    }
};