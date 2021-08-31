 // https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
 class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenDigit = 0;
        for(int i = 0; i < nums.size();i++){
            string ans = to_string(nums[i]);
            int len = ans.length();
            if(len % 2 == 0)evenDigit++;
        }
        return evenDigit;
    }
};