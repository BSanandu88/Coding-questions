/* Given a 0-indexed integer array nums, return the number of distinct quadruplets (a, b, c, d) such that:

nums[a] + nums[b] + nums[c] == nums[d], and
a < b < c < d
  */

 class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
       int count = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int m = k+1;m<n;m++){
                        if(nums[i] + nums[j] + nums[k] == nums[m]) count++;
                    }
                }
            }
        }
        return count;
    }
};