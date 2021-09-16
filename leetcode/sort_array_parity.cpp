
// Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

// Return any array that satisfies this condition.

 class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]%2 == 0){
                ans.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]%2 != 0)
            ans.push_back(nums[i]);
      }
        return ans;
    }
};

// 2 approach
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        auto lambda = [](int &a, int &b) {
            return a%2 < b%2;
        };
        
        sort(begin(nums), end(nums), lambda);
        return nums;
    }
};

