class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int ans = 0;
        int i = 0;
        int j = nums.size() - 1;
        int currmax = INT_MAX;
        int currmin = INT_MIN;
        int s = 0, e = - 1;
        while(j >= 0){
            if(nums[i] >= currmin){
                currmin = nums[i];
            }
            else{
                e = i;
            }
            if(nums[j] <= currmax){
                currmax = nums[j];
            }else{
                s = j;
            }
            i++;j--;
        }
        return e - s + 1;
    }
};