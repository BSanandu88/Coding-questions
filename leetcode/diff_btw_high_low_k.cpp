// You are given a 0-indexed integer array nums, where nums[i] represents the score of the ith student. You are also given an integer k.

// Pick the scores of any k students from the array so that the difference between the highest and the lowest of the k scores is minimized.

// Return the minimum possible difference.
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int req_ans = INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if((i+k-1)< nums.size()){
                req_ans = min(nums[i+k-1]-nums[i],req_ans);
            }
        }
        return req_ans;
    }
};