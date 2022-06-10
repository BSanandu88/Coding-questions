class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        int x = nums.size();
        while(x!=1){
            x = x/2;
            for(int i=0;i<x;i++){
                if(i%2==0){
                    nums[i] = min(nums[2 * i], nums[2 * i + 1]);
                }else{
                    nums[i] = max(nums[2 * i], nums[2 * i + 1]);
                }
            }   
        }
        return nums[0];  
    }
};